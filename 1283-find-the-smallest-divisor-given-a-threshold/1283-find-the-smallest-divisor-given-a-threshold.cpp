class Solution {
public:

    int sumDivisors(vector<int> &nums,int div){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum + ceil((double)(nums[i])/(double)(div));
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n =nums.size();
        int ans;
        if(n > threshold ) return -1;
        int high = *max_element(nums.begin(),nums.end());
        int low=1;

        while(low<=high){
            int mid=(low+high)/2;
            if(sumDivisors(nums,mid)<=threshold){
                high = mid-1;
                ans = mid;
            }
            else{
                low= mid+1;
            }
        }
        return ans;
       
    }
};