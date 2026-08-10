class Solution {
public:
    int reverse(int x) {
        long revNo = 0;

        while ( x != 0) {
            int ld = x % 10;
            revNo = (revNo * 10) + ld;
            x = x / 10;
        }
        if (revNo > INT_MAX || revNo < INT_MIN) {
            return 0;
        }
        return revNo;
    }
};