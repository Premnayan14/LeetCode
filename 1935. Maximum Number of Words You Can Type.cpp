class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        // Store broken letters in a set for O(1) lookup
        vector<bool> broken(26, false);
        for (char c : brokenLetters) {
            broken[c - 'a'] = true;
        }

        int count = 0;
        bool canType = true;  // tracks if current word is valid

        for (int i = 0; i <= text.size(); i++) {
            if (i < text.size() && text[i] != ' ') {
                if (broken[text[i] - 'a']) {
                    canType = false;  // this word contains broken letter
                }
            } else {
                if (canType) count++;  // finished a word and it was valid
                canType = true;       // reset for next word
            }
        }

        return count;
    }
};