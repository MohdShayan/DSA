class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=1+i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    if((i*j)%k==0) count++;
                }
            }
        }
        return count;
    }
};