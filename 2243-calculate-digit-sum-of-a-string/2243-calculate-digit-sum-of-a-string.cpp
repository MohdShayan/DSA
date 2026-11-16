class Solution {
public:
    string digitSum(string s, int k) {

        while (s.size() > k) {
            string ans = "";
            int n = s.size();
            for (int i = 0; i<n; i += k) {
                int sum = 0;

                for (int j = i;j<min(i+k,n); j++) {
                    sum =sum + int(s[j] - '0');
                }
                ans=ans+to_string(sum);
            }
            s = ans;
        }

        return s;
    }
};