class Solution {
public:
    string multiply(string num1, string num2) {
        
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size(), m = num2.size();
        string res(n + m, '0');  

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + (res[i + j + 1] - '0');

                res[i + j + 1] = (sum % 10) + '0';
                res[i + j] += sum / 10;  // carry
            }
        }

        // remove leading zeros
        int start = 0;
        while (start < res.size() && res[start] == '0')
            start++;

        return res.substr(start);
    }
}; 