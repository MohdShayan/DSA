class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        int j=n-1;
        vector<int> res(n);
        int ind=n-1;

        while(i<=j){
            if(abs(nums[i])<=abs(nums[j])){
                res[ind]=nums[j]*nums[j];
                ind--;
                j--;
            }
            else{
                res[ind]=nums[i]*nums[i];
                ind--;
                i++;
            }
        }
        return res;

    }
};