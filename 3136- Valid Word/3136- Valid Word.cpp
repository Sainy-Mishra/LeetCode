class Solution {
public:
    bool isValid(string word) {
        int n=word.length();
        bool hasVowel = false;
        bool hasConsonant = false;
        if(n<3){
            return false;
        }
        for(char ch:word){
            
            if(!isalnum(ch)){
                return false;
            }
            if(isalpha(ch)){
                char lowerChar=tolower(ch);
                if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' ||
                        lowerChar == 'o' || lowerChar == 'u') {
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            }
        }

        return hasVowel && hasConsonant;
    }
};