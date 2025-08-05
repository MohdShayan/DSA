class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size()-1;
        while(first<=last){
             int middle = (first+last)/2;
             if(nums[middle]==target) {
                return middle;
             }
             else if (nums[middle]>target){
                last = middle-1;
             }
             else{
                first=middle+1;
             }
        }
        return -1;
    }
};