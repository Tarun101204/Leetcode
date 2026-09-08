class Solution {
public:
    int countCommas(int n) {
        long long int x = 0;
        if(n>999){
            x = n - 999;
        }
        return x;
    }
};