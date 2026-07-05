class Solution {
public:
    int possibleStringCount(string word) {
        int ans=1;
        int n = word.size();
        
        int i=0;
        while (i < n) {
        int j = i;
        while (j < n && word[j] == word[i]) {
            j++;
        }    
        int l =j-i;
            
            if (l> 1) {
                ans += (l-1);
            }
            i = j;
        }
        return ans;
    }
};