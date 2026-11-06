class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int cnt =0;
        for(int i=0;i<arr1.size();i++){
            int left_range=arr1[i]-d;
            int right_range=arr1[i]+d;
           auto it = lower_bound(arr2.begin(),arr2.end(),left_range);
           if(it==arr2.end() || *it>right_range) cnt++;
        }
        return cnt;
    }
};