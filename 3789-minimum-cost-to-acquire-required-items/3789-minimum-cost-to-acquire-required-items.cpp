class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        int mini_need = min(need1, need2);
        long long ans = 1LL* mini_need * min(costBoth, cost1 + cost2);

        int rem1 = need1 - mini_need;
        int rem2 = need2 - mini_need;

        ans = ans + 1LL*rem1 * min(cost1, costBoth) ;
        ans = ans + 1LL*rem2 * min(cost2, costBoth);
        return ans;
    }
};