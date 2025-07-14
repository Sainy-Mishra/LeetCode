# include <iostream>
# include <vector>

using namespace std;

int main()
{
    int den[]={1,2,5,10,20,50,100,500,1000};
    
    int n=9;
    vector<int> ans;
    int V;
    cin>>V;
    
    for(int i=n-1;i>=0;i--){
        while(V>=den[i]){
            V-=den[i];
            ans.push_back(den[i]);
        }
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}