class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int ans = INT_MIN;
        vector<int> hash(51);
        int n=nums.size();
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        if(k==1){
            ans=-1;
            for(int i=0;i<=50;i++){
                if(hash[i]==1){
                    ans = i;
                }
            }
            return ans;
        }
        else if(k==n){
            for(int i=0;i<n;i++){
                ans = max(ans,nums[i]);
            }
        }
        else{
            if(hash[nums[0]]==1 && hash[nums[n-1]]==1){
                ans = max(nums[0],nums[n-1]);
            }
            else if(hash[nums[0]]>1 && hash[nums[n-1]]>1){ 
                ans = -1;
            }
            else if(hash[nums[0]]>1){ 
                ans = nums[n-1];
            }
            else{
                ans = nums[0];
            }
        }
        return ans;
        
    }
};