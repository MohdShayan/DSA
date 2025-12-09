class Solution {
public:

int funcMax(vector<int> &arr){
    int maxel = INT_MIN;
    for (int x : arr) maxel = max(maxel, x);
    return maxel;
}

long long funcTotalHours(vector<int> &v, int hourly){
    long long totalHours = 0;
    for (int x : v){
        totalHours += (x + hourly - 1) / hourly; 
    }
    return totalHours;
}

int minEatingSpeed(vector<int> &piles, int h) {
    int low = 1;
    int high = funcMax(piles);
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;  
        long long totalHours = funcTotalHours(piles, mid);

        if (totalHours <= h) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}
};
