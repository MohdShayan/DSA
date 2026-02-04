class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n<4) return false;
        int phase = 0; 
    // 0 inc, 1 dec, 2 inc

    if (nums[1] <= nums[0]) return false;

        for (int i=1;i<n;i++) {
            if (nums[i]==nums[i-1])
                return false;

            if (phase==0) {
                if (nums[i] < nums[i-1])
                    phase = 1;
            }
            else if (phase == 1) {
                if (nums[i]>nums[i-1])
                    phase = 2;
            }
            else { 
                if (nums[i]<nums[i-1])
                    return false;
            }
        }

        return phase==2;
    }
};