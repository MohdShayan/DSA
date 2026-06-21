class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int num=0;
        sort(costs.begin(),costs.end());
        for(int c: costs){
            if(c<=coins){
                coins=coins-c;
                num++;
            }
        }
        return num;
    }
};