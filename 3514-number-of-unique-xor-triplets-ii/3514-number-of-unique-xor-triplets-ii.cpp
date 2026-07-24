class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> st;

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                st.insert(nums[i] ^ nums[j]);
            }
        }

        unordered_set<int> res;
        for(auto it:st){
            for(int k=0;k<nums.size();k++){
                res.insert(it ^ nums[k]);
            }
        }
        return res.size();
    }
};