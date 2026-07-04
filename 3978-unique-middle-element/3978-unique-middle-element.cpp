class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int cnt=0;
        int targ = nums[nums.size()/2];
        for(int n : nums){
            if(n==targ) cnt++;
            if(cnt>1) return false;
        }
        return true;
    }
};