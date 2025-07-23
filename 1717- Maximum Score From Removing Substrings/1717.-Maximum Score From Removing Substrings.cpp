class Solution {
public:

    string removeSub(string &str, const string &matchStr){
        int i=0;

        for(int j=0;j<str.length();j++){
            str[i]=str[j];
            i++;

            if(i>=2 && str[i-2]==matchStr[0] && str[i-1]==matchStr[1]){
                i-=2;
            }
        }

        str.erase(str.begin()+i,str.end());

        return str;
    }

    int maximumGain(string s, int x, int y) {
        int n=s.length();
        int score=0;
        string maxSubstr = "ab";
        string minSubstr = "ba";

        if (x > y) {
            maxSubstr = "ab";
            minSubstr = "ba";
        } else if (x < y) {
            maxSubstr = "ba";
            minSubstr = "ab";
        }
        
        //first pass
        string firstSubs=removeSub(s,maxSubstr);
        int l=firstSubs.length();
        int removedSubs=(n-l);
        score+=(removedSubs/2)*max(x,y);

        //second pass
        string secondSubs=removeSub(firstSubs,minSubstr);
        removedSubs=l-secondSubs.length();
        score+=(removedSubs/2)*min(x,y);

        return score;
        
    }
};