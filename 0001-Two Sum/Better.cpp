#include <bits/stdc++.h>
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
    
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int more=target-arr[i];
        if(mp.find(more)!=mp.end()){
            cout<<"[ "<<mp[more]<<" , "<<i<<" ]"<<endl;
            return 0;
        }
        mp[arr[i]]=i;
    }
    
    cout<<"No pairs found";
    return 0;
}