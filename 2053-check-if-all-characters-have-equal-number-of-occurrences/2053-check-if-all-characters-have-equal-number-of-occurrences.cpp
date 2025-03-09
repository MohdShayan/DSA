class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map <char,int> mpp;
        int n = s.size();

        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        int f = mpp.begin()->second;
        for(auto it: mpp){
            if(it.second!=f) return false;
        }
        return true;
    }
};