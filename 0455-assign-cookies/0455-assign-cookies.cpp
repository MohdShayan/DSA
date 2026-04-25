class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ind=0;
        int i=0;

        while(i<g.size() && ind<s.size()){
            if(g[i]<=s[ind]){
                cnt++;
                i++;
            }
            ind++;
        }
        return cnt;
    }
};