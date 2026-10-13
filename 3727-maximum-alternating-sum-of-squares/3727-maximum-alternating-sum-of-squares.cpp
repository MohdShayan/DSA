class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();

        for (int &x : nums) {
        x = abs(x);
        }

        sort(nums.begin(), nums.end());
        int i=0,j=n-1;
        while(i<=j){
            ans = ans + nums[j]*nums[j];
            j--;
            if(i<=j){
            ans = ans- nums[i]*nums[i];
            i++;
            }
        }

    return ans;
    }
};