class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
           int t =('z'-s[i])+1;
           ans = ans + t*(i+1);
        }
        return ans;
    }
};