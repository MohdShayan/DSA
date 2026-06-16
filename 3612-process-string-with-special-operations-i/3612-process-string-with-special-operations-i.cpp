class Solution {
public:
    string processStr(string s) {
        string res="";
        for(char c : s){
            if(islower(c)){
                res=res+c;
            }
            else if(c=='*'){
                res=res.substr(0,res.size()-1);
            }
            else if(c=='#'){
                res=res+res;
            }
            else{
                reverse(res.begin(),res.end());
            }
        }
        return res;
    }
};