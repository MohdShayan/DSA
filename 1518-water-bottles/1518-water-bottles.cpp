class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        long sum = numBottles;
        int empty = numBottles;

        while (empty >= numExchange) {
            int newB = empty / numExchange;  
            sum += newB;                      
            empty = newB + (empty % numExchange);  
        }

        return sum;
    }
};
