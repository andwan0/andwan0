class Solution {
public:
    static const int L = 26;
    int exist[L];
    int place[L];
    
    void init() {
        for (int i = 0; i < L; ++i) {
            exist[i] = 0;
            place[i] = 0;
        }
    }
    
    int geti(char c) {
        return c - 'a';
    }
    
    void erase(int j) {
        for (int i = 0; i < L; ++i) {
            if (place[i] == j) exist[i] = 0;
        }
    }
    
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) return 0;
        init();
        int start = 0;
        int maxlength = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (exist[geti(s[i])]) {
                int old_start = start;
                start = place[geti(s[i])] + 1;
                for (int j = old_start; j < start - 1; ++j) {
                    erase(j);
                }
            }
            else exist[geti(s[i])] = 1;
            place[geti(s[i])] = i;
            maxlength = maxlength > i - start ? maxlength : i - start;
        }
        return maxlength + 1;
    }
};
