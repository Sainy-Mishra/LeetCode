class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        int maxdiag=0;
        int maxarea=0;
        for(int i=0;i<n;i++){
            int d=dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1];
            int area=dimensions[i][0]*dimensions[i][1];
            if(d>maxdiag){
                maxdiag=d;
                maxarea=area;
            }
            else if(d==maxdiag){
                maxarea=max(area,maxarea);
            }
        }
        return maxarea;
    }
};