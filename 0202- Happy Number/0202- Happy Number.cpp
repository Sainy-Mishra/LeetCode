class Solution {
public:
    bool isHappy(int n) {
        int count=1000;
        while(count--){
            int num=n;
            int sum=0;
            while(num>0){
                sum=sum+pow(num%10,2);
                num=num/10;
            }
            if (sum == 1){
            return true;
            }

            n=sum;
        }
        
        return false;
    }
};