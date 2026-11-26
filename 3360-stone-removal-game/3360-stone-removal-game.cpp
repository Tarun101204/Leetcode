class Solution {
public:
    bool canAliceWin(int n) {
        int count = 10;

        while(n >= count) {
            n = n - count;
            count--;

            if(n < count) return true;

            n = n - count;
            count--;
        }

        return false;
    }
};