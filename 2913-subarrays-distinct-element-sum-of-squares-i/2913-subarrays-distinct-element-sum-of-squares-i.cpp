class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int i=0;
        int j=0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            set<int> st;
            for(int j=i;j<nums.size();j++){
                    st.insert(nums[j]);
                    int sz= st.size();
                    cnt = cnt + sz*sz;
            }
        }
        return cnt;
    }
};