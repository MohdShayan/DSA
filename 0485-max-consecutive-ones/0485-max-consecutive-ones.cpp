class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int c=0;
        for(auto it : nums){
            if(it==1){
                c++;
                if(c>max) max=c;
            }
            else{
                c=0;
            }
            
        }
    return max;
    }

};