class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> eq;
        int n=nums.size();
        vector<int> bigger;
        for(int num: nums){
            if(num<pivot) {
                smaller.push_back(num);
            }
            else if(num>pivot){
                 bigger.push_back(num);
            }
            else{
                eq.push_back(num);
            }
        }
        for(int eqn : eq){
            smaller.push_back(eqn);
        }
        for(int bn: bigger){
            smaller.push_back(bn);
        }
    return smaller;
    }
};