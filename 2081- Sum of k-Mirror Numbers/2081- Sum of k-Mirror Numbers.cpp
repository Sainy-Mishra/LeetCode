class Solution {
public:
    bool ispalindrome(string s){
        int i=0, j=s.length()-1;
        while(i <= j){
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    string convert(long long num, int k){
        if(num == 0)
            return "0";
        string result = "";
        while(num > 0){
            result += to_string(num % k);
            num /= k;
        }
        return result;
    }

    long long kMirror(int k, int n) {
        long long sum = 0;
        int L = 1;

        while(n > 0){
            int len = (L + 1) / 2;
            long long minVal = pow(10, len - 1);
            long long maxVal = pow(10, len) - 1;

            for(long long num = minVal; num <= maxVal; num++){
                string first = to_string(num);
                string last = first;
                reverse(last.begin(), last.end());

                string pal = "";
                if(L % 2 == 0){
                    pal = first + last;
                } else {
                    pal = first + last.substr(1); 
                }

                long long pal_num = stoll(pal);
                string baseK = convert(pal_num, k);

                if(ispalindrome(baseK)){
                    sum += pal_num;
                    n--;
                    if(n == 0)
                        break;
                }
            }
            L++;
        }
        return sum;
    }
};
