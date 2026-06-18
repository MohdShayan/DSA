class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12) hour=0;
        double hrAngle = hour*30+(minutes*0.5);
        double minAngle = minutes*6;
        double diff = abs(hrAngle-minAngle);
        return min(diff, 360-diff);
    }
};