class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int i=nums.size()-1;
        sort(nums.begin(),nums.end());
        long long ans = 0;
        while(k-- && i>=0){
            long long x = nums[i];
            ans = ans + max(x,x*mul);
             mul--;
             i--;
        }
        return ans;
    }
};