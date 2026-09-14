class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int r1_x1 = rec1[0];
        int r1_y1 = rec1[1];
        int r1_x2 = rec1[2];
        int r1_y2 = rec1[3];

        int r2_x1 = rec2[0];
        int r2_y1 = rec2[1];
        int r2_x2 = rec2[2];
        int r2_y2 = rec2[3];

        if(r2_y2<=r1_y1) return false; //down
        if(r2_y1>=r1_y2) return false; // up
        if(r2_x1>=r1_x2) return false; // right
        if(r2_x2<=r1_x1) return false; // left

        return true;
    }
};