class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int i=1;
        int ans=0;
        int n=nums.size();
        for(int x:nums){
            if(n%i==0){
                ans = ans +x*x;
            }
            i++;
        }
        return ans;
    }
};