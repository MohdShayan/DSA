class Solution {
public:
    bool contain_zero(int n) {
        while (n != 0) {
            if (n % 10 == 0)
                return true;
            n = n / 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {

        for (int a = 1; a < n; a++) {
            int b = n - a;
            if (!contain_zero(a) && !contain_zero(b)) {
                return {a, b};
            }
        }

        return {};
    }
};