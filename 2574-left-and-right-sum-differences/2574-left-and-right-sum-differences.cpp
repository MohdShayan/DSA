class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftSum(n);
        vector<int> rightSum(n);
        int lsum=0;
        int rsum=0;
        for(int i=0;i<n;i++){
            leftSum[i]=lsum;
            lsum=lsum+nums[i];
        }
        for(int j=n-1;j>=0;j--){
            rightSum[j]=rsum;
            rsum=rsum+nums[j];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(leftSum[i]-rightSum[i]);
        }
        return ans;
    }
};