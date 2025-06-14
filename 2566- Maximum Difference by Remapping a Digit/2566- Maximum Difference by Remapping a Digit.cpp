class Solution {
public:
    int minMaxDifference(int num) {
        string number=to_string(num);
        int len=number.length();
        int digit1=0;
        for(int i=0;i<len;i++){
            if(number[i] !='9'){
                digit1=number[i];
                break;
            }
        }
        string max="";
        for(int i=0;i<len;i++){
            if(number[i]==digit1){
                max+='9';
            }
            else{
                max+=number[i];
            }
        }

        int digit2=0;
        for(int i=0;i<len;i++){
            if(number[i] !='0'){
                digit2=number[i];
                break;
            }
        }

        string min="";
        for(int i=0;i<len;i++){
            if(number[i]==digit2){
                min+='0';
            }
            else{
                min+=number[i];
            }
        }
        int min_num=stoi(min);
        int max_num=stoi(max);

        int result=max_num-min_num;
        return result;
    }
};