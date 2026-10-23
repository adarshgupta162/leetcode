class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = 0;
        int n = s.size();

        while (n > 0 && s[n - 1] == ' ') {
            n--;
        }

        while (n > 0 && s[n - 1] != ' ') {
            i++;
            n--;
        }

        return i;
    }
};