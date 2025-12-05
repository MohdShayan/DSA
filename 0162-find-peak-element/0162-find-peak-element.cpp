class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int low =1;
        int high = n-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1]){
                low = mid+1; // you are on increasing curve eliminate left part
            }
            else if(nums[mid]>nums[mid+1]){
                high=mid-1; //you are decreasing curve elimiate right part
            }
            else{
                low = mid+1; // you are negative peak go on either side (left)
            }
        }
        return -1;
    }
};