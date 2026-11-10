class Solution {
public:

    int climbStairs(int n, vector<int>& costs) {
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;

    for (int j = 1; j <= n; j++) {
         for (int jump = 1; jump <= 3; jump++) {
            int prev = j - jump;

            if (prev >= 0) {
                int cost = dp[prev] + costs[j - 1] + jump * jump;
                dp[j] = min(dp[j], cost);
            }
        }
    }
        return dp[n];

    }
};