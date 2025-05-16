class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = INT_MIN;
        int ans = 0;
        unordered_map<int, int> mpp;
        
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        for (auto it : mpp) {
            if (it.second > temp) {
                temp = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};
