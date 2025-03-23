class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int t = 0;
        for (int num : nums) {
            t = t ^ num;
        }
        return t;
    }
};