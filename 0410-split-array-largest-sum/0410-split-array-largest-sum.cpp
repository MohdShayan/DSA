class Solution {
public:
    int cntSubArrays(vector<int> &nums,int maxSum){
        int cntArray = 1;
        int currSum=0;
        for(int i=0;i<nums.size();i++){
            if(currSum + nums[i]<=maxSum){
                currSum = currSum + nums[i];
            }
            else{
                currSum=nums[i];
                cntArray++;
            }
        }
        return cntArray;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int mid = (low+high)/2;
            int subarr = cntSubArrays(nums,mid);
            if(subarr>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};