#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(arr[i]+arr[j]==target){
                cout << "[ " << i << ", " << j <<" ]" <<endl;
                return 0; 
            }
        }
    }
    cout<<"No pairs found";
    return 0;
}