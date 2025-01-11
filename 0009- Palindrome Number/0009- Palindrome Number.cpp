class Solution {
public:
    bool isPalindrome(int x) {
        int n=sizeof(x);
        if(n<0){
            return false;
        }

        int original = x;
        int reversed = 0;
        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }
        if(reversed==original){
            return true;
        }
        return false;
    }
};
