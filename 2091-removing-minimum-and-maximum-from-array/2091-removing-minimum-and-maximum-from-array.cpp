class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=0,maxi=0;
        int ans;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[mini]){
                mini=i;
            }
            if(nums[i]>nums[maxi]){
                maxi=i;
            }
        }

        //c1 : rem from front
        int c1=max(mini+1,maxi+1);

        //c2: rem from back
        int c2= max(n-maxi,n-mini);
        ans = min(c1,c2);

        //c3: remove from both
        int c3;
        if(mini<maxi){
            c3=(mini+1)+(n-maxi);
        }
        else{
            c3=(maxi+1)+(n-mini);
        }
        ans = min(ans,c3);
        return ans;
    }
};