#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int temp=n;
    int digit;
    int reversed=0;
    while(temp>0){
        digit=temp%10;
        reversed=reversed*10+digit;
        temp=temp/10;
    }
    
    if(reversed==n){
        cout<<"Palindrome Number";
    }
    else{
        cout<<"Not a Palindrome Number";
    }
    return 0;
}