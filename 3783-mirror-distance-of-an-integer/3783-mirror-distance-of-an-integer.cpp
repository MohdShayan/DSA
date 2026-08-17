class Solution {
public:
    int mirrorDistance(int n) {
     if(n<10) return 0;

     string num = to_string(n);
     reverse(num.begin(),num.end());
     int new_num = stoi(num);

     return abs(n-new_num);

    }
};