class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum=0;
        int mis,dup;
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        
        for(auto x:mpp){
            if(x.second==2){
                dup=x.first;
            }
        }
        for(int i = 1; i <= nums.size(); i++){
            if(mpp[i] ==0){
                mis = i;
            }
        }
        return{dup,mis};
    }
};