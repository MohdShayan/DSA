class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int charArr[26] = {0};
        for(char c:magazine){
            charArr[c-'a']++;
        }
        for(char a: ransomNote){
            if(charArr[a-'a']>0){
                charArr[a-'a']--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};