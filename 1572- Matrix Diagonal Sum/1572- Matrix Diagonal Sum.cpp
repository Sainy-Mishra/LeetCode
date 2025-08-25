class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int sum=0;

        for(int i=0;i<row;i++){
            sum+=mat[i][i];
            sum+=mat[i][row-i-1];
        }

        if(row%2==1){
            sum-=mat[row/2][row/2];
        }

        return sum;
    }
};