class Solution {
public:
vector<int> maxTillInd(vector<int> nums){
    int n=nums.size();
    vector<int> maxArr(n);
    int maxi = nums[0];
    for(int i=0;i<n;i++){
        maxi = max(maxi, nums[i]);
        maxArr[i] = maxi;
    }
    return maxArr;
}
vector<int> minFromBack(vector<int> nums){
    int n=nums.size();
    vector<int> minArr(n);
    int mini = nums[n-1];
    for(int i=n-1;i>=0;i--){
        mini = min(mini,nums[i]);
        minArr[i] = mini;
    }
    return minArr;
}
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> minArr = minFromBack(nums);
        vector<int> maxArr= maxTillInd(nums);
        for(int i=0;i<nums.size();i++){
            if(maxArr[i] - minArr[i]<=k){
               return i;
            }
        }
        return -1;
    }
};