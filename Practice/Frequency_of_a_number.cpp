#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int k;
    cout<<"Enter the number for frequency counting: ";
    cin>>k;
    int temp=n;
    int c=0;
    while(temp>0){
        if(temp%10==k){
            c++;
        }
        temp=temp/10;
    }
    cout<<"The frequency of "<<n<<" is: "<< c;
    return 0;
}