class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }

        string res="";
        for(int r=0;r<numRows;r++){
            int increment=2 * (numRows-1);
            for(int i=r;i<s.length(); i++){
                res += s[i];
                if(r>0 && r< numRows-1 && i+increment-2*r < s.length()){
                    res += s[i+increment-2*r];
                }
            }
        }
        return res;
    }
};