class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long result = 0;

        // 1. Skip leading spaces
        while (i < s.length() && s[i] == ' ')
            i++;

        // 2. Check for '+' or '-'
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits to integer
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // 4. Clamp to INT_MIN/INT_MAX
            if (sign * result <= INT_MIN) return INT_MIN;
            if (sign * result >= INT_MAX) return INT_MAX;

            i++;
        }

        return (int)(sign * result);
    }
};