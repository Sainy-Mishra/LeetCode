#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact=1;
    cin>>n;
    if(n<0){
        cout<<"Error";
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<"Factorial of "<<n<<" is: "<<fact;
    }
    return 0;
}