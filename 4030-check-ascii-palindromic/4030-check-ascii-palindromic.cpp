class Solution {
public:
    string toBinary(char c) {
        int n = c;
        string s(8, '0');

        for (int i = 7;i >= 0; i--) {
            s[i] = (n %2) + '0';
            n = n/2;
        }
        return s;
    }

    bool isPalindromic(string s) {
        string ans;

        for (char c : s) {
            ans += toBinary(c);
        }
        int i = 0;
        int j = ans.length() - 1;

        while (i < j) {
            if (ans[i] != ans[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};