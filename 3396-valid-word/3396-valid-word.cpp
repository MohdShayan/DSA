class Solution {
public:
    bool isValid(string word) {
        if(word.length() < 3) return false;
        
        int v=0,c=0;

        for(char ch : word){
            if(!isalnum(ch)) return false;

            if(isalpha(ch)){
            char lowerCh = tolower(ch);
            
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                    v++;
                } else {
                    c++;
                }
            }
        }
             return (v > 0 && c > 0);
        
            
        
    }
};