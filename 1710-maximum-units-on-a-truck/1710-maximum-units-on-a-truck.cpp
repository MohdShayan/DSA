class Solution {
public:

static bool comp(vector<int> val1, vector<int> val2){
    return val1[1] > val2[1];
}

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);
        int bx=0;
        for(int i=0;i<boxTypes.size();i++){
            while(truckSize && boxTypes[i][0]!=0){
                
                bx = bx+boxTypes[i][1];
                truckSize--;
                boxTypes[i][0]--;
            }
        }
        return bx;
    }
};