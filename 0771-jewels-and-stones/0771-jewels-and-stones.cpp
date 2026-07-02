class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map <char,int> mpp;
        int ans=0;
        for(char s : stones){
            mpp[s]++;
        }
        for(char j : jewels){
            ans =ans + mpp[j];
        }
    return ans;
    }
};