class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> temp;
        int m=grid.size();
        int n = grid[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp.push_back(grid[i][j]);
            }
        }
        k = k%(m*n);
        int ts=temp.size();

        vector<int> arr(ts);
        for(int i=0; i < ts; i++) {
        arr[(i + k) % (m * n)] = temp[i];
        }
        int t=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]= arr[t++];
            }
        }
        return grid;


    }
};