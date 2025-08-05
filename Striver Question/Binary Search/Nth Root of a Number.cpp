#include <iostream>
#include <cstring>
using namespace std;

double multiply(double number, int n){
    double ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*number;
    }
    return ans;
}

double nthroot(int n, int m){
    double low=0;
    double high=m;
    double eps=1e-6;

    while((high-low)>eps){
        double mid= (high+low)/2;
        if(multiply(mid, n)<m){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    return low;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<"The "<<n<<"th root of "<<m<<" is "<<nthroot(n,m);
}