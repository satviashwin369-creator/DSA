class Solution {
public:
    bool isPalindrome(int x) {
        long long revNo = 0;
        int d = x;
        while ( x > 0) {
            int ld = x % 10;
            revNo = (revNo * 10) + ld;
            x = x / 10;
        }
        if (d == revNo) {
            return true;
        }
        return false;
    }
};