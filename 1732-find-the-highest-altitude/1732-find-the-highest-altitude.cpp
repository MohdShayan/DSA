class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxH=INT_MIN;
        for(int i=0;i<gain.size();i++){
            sum=sum+gain[i];
            if(sum>maxH){
                maxH=sum;
            }

        }
        return maxH<0? 0: maxH;
    }
};