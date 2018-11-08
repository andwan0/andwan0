#include <iostream>
using namespace std;

class Solution {
public:
    //static const int L = 26;
    static const int L = 128;//for ASCII
    int exist[L];
    int place[L];
    
    void init() {
        for (int i = 0; i < L; ++i) {
            exist[i] = 0;
            place[i] = 0;
        }
    }
    
    int geti(char c) {
        //return c - 'a';
        return c;//because leetcode test set includes '!' characters
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
            if (exist[geti(s[i])]) {//Runtime Error Message: Line 30: index -65 out of bounds for type 'int [26]'
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

int main()
{
    int a = Solution().lengthOfLongestSubstring("abcabcbb");
    int b = Solution().lengthOfLongestSubstring("bbbbb");
    int c = Solution().lengthOfLongestSubstring("pwwkew");
    cout << a << " " << b << " " << c << endl;
    system("pause");
}