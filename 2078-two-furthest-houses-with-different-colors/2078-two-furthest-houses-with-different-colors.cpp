class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int d=0;
        int n=colors.size();
        for(int i=0;i<n;i++){
            for(int j=n-1;j>0;j--){
                if(colors[i]!=colors[j]){
                    d=max(d,j-i);
                }
            }
        }
        return d;
    }
};