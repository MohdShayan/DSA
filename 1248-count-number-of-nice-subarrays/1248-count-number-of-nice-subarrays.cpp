class Solution {
public:

    int sumSubArrayEqualToGoal(vector<int> nums,int k){
        if(k<0) return 0;
         int l=0,r=0,sum=0,cnt=0;

         while(r<nums.size()){
            sum = sum + (nums[r])%2;

            while(sum>k){
                sum = sum - nums[l]%2;
                l++;
            }
            cnt=cnt +(r-l+1);
            r++;
         }
         return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return sumSubArrayEqualToGoal(nums,k) - sumSubArrayEqualToGoal(nums,k-1);
    }
};