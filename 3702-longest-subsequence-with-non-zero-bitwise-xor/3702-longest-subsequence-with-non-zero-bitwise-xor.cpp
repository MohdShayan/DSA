class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool nonZero=false;
        int n=nums.size();
        int all_xor=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) nonZero = true;
            all_xor = all_xor ^ nums[i];
        }
        if(all_xor ==0){
            if(nonZero) return n-1;
            
            return 0;
        }
        return n;
    }
};