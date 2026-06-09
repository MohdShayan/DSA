class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long mxn = *max_element(nums.begin(),nums.end());
        long min = *min_element(nums.begin(),nums.end());
        long d=mxn-min;
        return k*d;
    }
};