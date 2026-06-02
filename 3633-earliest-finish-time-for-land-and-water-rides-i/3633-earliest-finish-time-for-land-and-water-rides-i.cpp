class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        
    int n=landStartTime.size();
    int m=waterStartTime.size();
        
    int ans = INT_MAX;
        
     for(int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                
                int finLand = landStartTime[i] + landDuration[i];
                int startWtr = max(finLand, waterStartTime[j]);
                int finWater = startWtr + waterDuration[j];
                
                ans = min(ans, finWater);
                
                int finWater1 = waterStartTime[j] + waterDuration[j];
                int strLand = max(finWater1, landStartTime[i]);
                int finLand2 = strLand + landDuration[i];
                
                ans = min(ans, finLand2);
            }
        }
        
        return ans;
    }
};