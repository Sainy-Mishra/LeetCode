#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int SJF(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int ntime=0;
    int wtime=0;
    
    for(int i=0;i<n;i++){
        wtime+=ntime;
        ntime+=arr[i];
    }
    
    return (wtime/n);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"The average weight time is: "<<SJF(arr);
    return 0;
}
