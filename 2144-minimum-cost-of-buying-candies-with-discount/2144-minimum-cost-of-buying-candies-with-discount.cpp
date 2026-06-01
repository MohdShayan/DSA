class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int mcost=0;
        for (int i=0; i <cost.size(); i++) {
            if (i % 3 != 2){
                mcost= mcost+cost[i];
            }
        }
    return mcost;
    }
};