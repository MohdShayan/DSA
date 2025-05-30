class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int missing , repeated;
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mpp[grid[i][j]]++;
            }
        }

        for (int num = 1; num <= n * n; num++) {
            if (mpp[num] == 0) missing = num;
            else if (mpp[num] == 2) repeated = num;
        }

        return {repeated, missing};
    }
};
