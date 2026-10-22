class Solution {
  public:
    int minimumSum(string &s) {
        int i = 0, j = s.size() - 1;
        int diff = 0;
        char left = '\0', right = '\0';

        while(i <= j) {
            char c = '\0';

            if(s[i] != '?' && s[j] != '?') {
                if(s[i] != s[j]) return -1;
                else c = s[i];
            }
            else if(s[i] != '?' && s[j] == '?') c = s[i];
            else if(s[i] == '?' && s[j] != '?') c = s[j];
            else { i++, j--; continue; }

            if(left != '\0') diff += abs(c - left);
            left = c;

            if(right != '\0') diff += abs(c - right);
            right = c;

            i++;
            j--;
        }

        return diff;
    }
};