class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max=INT_MIN;
        int n = nums.size();
        int diff;
        for(int i=0;i<n-1;i++){
            for(int j=1+i;j<n;j++){
                diff = nums[j]-nums[i];
                if(diff>max && diff!=0){
                    max=diff;
                }
            }
        }
        if(max<0) return -1;
        return max;
    }
};