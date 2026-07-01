class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        bool found = false;
        int i;
        int ind;
        for( i=n-1;i>=0;i--){
            if((num[i]=='1' || num[i]=='3' || num[i]=='5' || num[i]=='7'|| num[i]=='9') && found==false){
                ind=i;
                found =true;
            }
        }
        if(i==-1 && found ==false){
            return "";
        }
        return num.substr(0,ind+1);
    }
};