class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         vector<int> temp = arr;
        sort(temp.begin(), temp.end());

       unordered_map<int, int> mpp;
    int rank = 1;

        for (int t:temp) {
            if (mpp.find(t) == mpp.end()) {
                mpp[t] = rank++;
            }
        }
        vector<int> ans;
        for (int x : arr) {
            ans.push_back(mpp[x]);
        }

        return ans;

    }
};