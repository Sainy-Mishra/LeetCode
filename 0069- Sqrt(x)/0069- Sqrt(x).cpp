class Solution {
public:
    int mySqrt(int x) {
        double low=0;
        double high=x;
        double eps=1e-6;

        while((high-low)>eps){
            double mid= (high+low)/2;
            if(mid*mid<x){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        return (int)high;
    }
};