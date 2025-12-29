class Solution {
public:

int max_el_row(vector<vector<int>>& mat,int col){
    int n=mat.size();
    int ind=-1;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(mat[i][col]>max){
        max= mat[i][col];
        ind = i;
        }
    }
    return ind;
}

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        int low=0;
        int high = n-1;

        while(low<=high){
            int mid=(low+high)/2;
            int maxRowIndex = max_el_row(mat,mid);
            int left = mid-1>= 0 ? mat[maxRowIndex][mid-1] : -1;
            int right = mid+1 < n ? mat[maxRowIndex][mid+1] : -1;

            if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid]>right){
                return {maxRowIndex, mid};
            }
            else if(mat[maxRowIndex][mid] <left){
                high =mid-1;

            }
            else{ low = mid+1; }
        }
        return {-1,-1};
    }
};