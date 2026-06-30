class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans =0;
        int n=s.size();
        int l=0;
        int r=0;
        vector<int> freq_abc(3,0);

        while(r<n){
            char curr = s[r];
            freq_abc[curr-'a']++;

            while(freq_abc[0]>0 && freq_abc[1]>0 && freq_abc[2]>0){
                ans = ans + n-r;
                freq_abc[s[l]-'a']--;
                l++;
            }
            r++;
        }
            
    return ans;
    }
};