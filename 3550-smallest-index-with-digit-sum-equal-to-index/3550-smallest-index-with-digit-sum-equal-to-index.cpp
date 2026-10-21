class Solution {
public:
    int digitSum (int n){
        int ans=0;
        while(n>0){
            int ld = n%10;
            ans = ans + ld;
            n=n/10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(digitSum(nums[i])==i){
                return i;
            } 
        }
        return -1;
    }
};