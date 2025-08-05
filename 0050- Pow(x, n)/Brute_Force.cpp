class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long power=n;

        if(power<0){
            x=1/x;
            power=-power;
        }
        for(long long i=0;i<power;i++){
            ans=ans*x;
        }
        return ans;
    }
};