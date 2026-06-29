class Solution {
public:

bool patExists(string p, string word) {
    return word.find(p) != string::npos;
}
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for(int i=0;i<patterns.size();i++){
            if(patExists(patterns[i], word)){
                ans++;
            }
        }
        return ans;
    }
};