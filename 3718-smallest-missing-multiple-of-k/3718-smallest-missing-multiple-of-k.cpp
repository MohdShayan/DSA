class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set <int> st(nums.begin(),nums.end());
        int i=k;
        while(st.count(i)){
            i=i+k;
        }
        return i;
    }
};