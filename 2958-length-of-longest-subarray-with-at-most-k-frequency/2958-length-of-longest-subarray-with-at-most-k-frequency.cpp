class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0;
        unordered_map <int,int> mpp;
        int maxlen=0;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;

            while(mpp[nums[i]]>k){
                mpp[nums[l]]--;
                l++;
            }
                maxlen = max(maxlen,i-l+1);
        }
        return maxlen;
    }
};