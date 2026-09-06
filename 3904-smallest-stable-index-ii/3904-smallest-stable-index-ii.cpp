class Solution {
public:
    vector<int> prefMax(vector<int> arr){
        int n=arr.size();
        vector<int> pMax(n);
        int maxi = arr[0];
        for(int i=0;i<n;i++){
            maxi = max(maxi,arr[i]);
            pMax[i] = maxi;
        }
        return pMax;
    }
    vector<int> suffMin(vector<int> arr){
        int n=arr.size();
        vector<int> sMin(n);
        int mini = arr[n-1];
        for(int i=n-1;i>=0;i--){
            mini = min(mini,arr[i]);
            sMin[i] = mini;
        }
        return sMin;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> pMax = prefMax(nums);
        vector<int> sMin = suffMin(nums);
        for(int i=0;i<nums.size();i++){
            if(pMax[i]-sMin[i]<=k) return i;
        }
        return -1;
    }
};