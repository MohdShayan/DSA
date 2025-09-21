class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenWord=0;
        int i= s.size()-1;
        if( i==0 && s[i] != ' ') return 1; 

        while(i>=0 && s[i]==' ') i--;

        while( i>=0 && s[i]!= ' '){
            lenWord++;
            i--;
        }

       return lenWord;
    }
};