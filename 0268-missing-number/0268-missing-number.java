class Solution {
    int sum(int[] nums){
        int sum=0;
        for(int i: nums){
            sum+= i;
        }
        return sum;
    }
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sumArr = sum(nums);
        int sumuptoN = (n*(n+1))/2;

        return sumuptoN-sumArr;

    }
}