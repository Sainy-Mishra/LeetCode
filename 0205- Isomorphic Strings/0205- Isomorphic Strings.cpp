class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int ls=s.length();
        int lt=t.length();

        if(ls!=lt){
            return false;
        }

        unordered_map <char, char> mapst;
        unordered_map <char, char> mapts;

        for(int i=0;i<ls;i++){
            char c1=s[i];
            char c2=t[i];

            if(mapst.count(c1)){
                if(mapst[c1]!=c2){
                    return false;
                }
            }
            else{
                    mapst[c1]=c2;
            }

            if(mapts.count(c2)){
                if(mapts[c2]!=c1){
                    return false;
                }
            }
            else{
                    mapts[c2]=c1;
            }
        }
        return true;
    }
};