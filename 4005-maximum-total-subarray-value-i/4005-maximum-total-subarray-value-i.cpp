class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {

        long max = *max_element(nums.begin(),nums.end());
        long min = *min_element(nums.begin(),nums.end());

        long diff = max-min;
        return k*diff;
    }
};