class Solution {
public:
    bool checkString(string s) {
        int seen_b=false;
        for(char c :s){
            if(c=='b'){
                seen_b=true;
            }
            if(seen_b==true && c=='a'){
                return false;
            }
        }
        return true;
    }
};