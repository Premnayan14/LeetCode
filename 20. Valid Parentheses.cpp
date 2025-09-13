class Solution {
public:
    bool isValid(string s) {
         string memory = "";  // like a small box to store opened brackets

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                // just put the bracket in memory
                memory.push_back(c);
            } else {
                if (memory.empty()) return false;  // nothing to match with

                char last = memory.back(); // get last opened bracket
                memory.pop_back();         // remove it from memory

                // check if last opened matches this closing one
                if ((c == ')' && last != '(') ||
                    (c == '}' && last != '{') ||
                    (c == ']' && last != '[')) {
                    return false;
                }
            }
        }
        return memory.empty();
    }
};