class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int maxlen = 0;
        unordered_map<char,int> mpp;
        for(int i=0;i<n;i++){
           mpp.clear();
            for(int j=i;j<n;j++){
                mpp[s[j]]++;
                if(mpp[s[j]]<=2){
                    maxlen = max(maxlen, j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return maxlen;
    }
};