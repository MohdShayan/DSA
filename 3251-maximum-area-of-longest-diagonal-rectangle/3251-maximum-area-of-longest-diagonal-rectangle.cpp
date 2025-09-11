class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxAr = 0;
        double maxD = 0;
        for(auto it : dimensions){
            int l = it[0];
            int w = it[1];
            int ar = l*w;
            double diag= sqrt(l*l + w*w);

            if( diag > maxD){
                maxD = diag;
                maxAr = ar;
            }
            else if(diag == maxD && ar>maxAr){
                maxAr = ar;
            }
        }
        return maxAr;
    }
};