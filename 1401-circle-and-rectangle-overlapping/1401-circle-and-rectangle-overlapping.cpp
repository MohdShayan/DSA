class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xclose, yclose;
        if (xCenter < x1)
            xclose = x1;
        else if (xCenter > x2)
            xclose = x2;
        else
            xclose = xCenter;

            //y
        if (yCenter < y1)
            yclose = y1;
        else if (yCenter > y2)
            yclose = y2;
        else
            yclose = yCenter;
        
        int d = sqrt(pow(xCenter-xclose,2)+pow(yCenter-yclose,2));
        return d<=radius;
    }
};