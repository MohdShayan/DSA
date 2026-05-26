class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> loCh (26,0);
        vector<int> upCh (26,0);
        int cnt=0;
        for(char c : word){
            if(c>='a' && c<='z'){
                loCh[c-'a']++;
            }
            else{
                upCh[c - 'A']++;
            }
        }
        for (int i=0;i<26; i++) {
            if (loCh[i] > 0 && upCh[i]>0) {
                cnt++;
            }
        }

        return cnt;
    }
};