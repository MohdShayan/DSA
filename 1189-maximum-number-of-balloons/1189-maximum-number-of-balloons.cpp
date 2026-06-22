class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> arr(26,0);
        for(char c :text){
            arr[c-'a']++;
        }
        int cnt = min({arr['b'-'a'] , arr['a'-'a'] , arr['l'-'a']/2,arr['o'-'a']/2,arr['n'-'a']});
        return cnt;
    }
};