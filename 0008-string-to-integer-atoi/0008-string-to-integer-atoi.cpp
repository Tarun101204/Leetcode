class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long long num = 0;

        for (; i < s.size() && s[i] == ' '; i++);

        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        for (; i < s.size() && s[i] >= '0' && s[i] <= '9'; i++) {
            num = num * 10 + (s[i] - '0');

            if (sign * num > INT_MAX) return INT_MAX;
            if (sign * num < INT_MIN) return INT_MIN;
        }

        return sign * num;
    }
};
