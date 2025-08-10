#include <bits/stdc++.h>
using namespace std;

bool isPossible(int mid, int n, vector<int> &arr, int m){
    int allocateStu=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(pages+arr[i]>mid){
            allocateStu+=1;
            pages=arr[i];
        }
        else{
            pages+=arr[i];
        }
    }
    if(allocateStu>m){
        return false;
    }
    return true;
}

int minAlloc(vector<int> &arr, int n, int m){
    int low=*max_element(arr.begin(), arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    int res=-1;
    
    if(m>n) return -1;
    
    while(low<=high){
        int mid=(low+high)>>1;
        if(isPossible(mid,n,arr,m)){
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    int ans=minAlloc(arr,n,s);
    
    cout<<"The result is: "<<ans;
    return 0;
}