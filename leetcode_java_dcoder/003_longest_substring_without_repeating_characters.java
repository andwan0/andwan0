package longest_substr_without_repeat;
import java.util.*;



class Solution {
    /*
    Approach 1: Brute Force
    Intuition
    Check all the substring one by one to see if it has no duplicate character.
     */
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                if (allUnique(s, i, j)) ans = Math.max(ans, j - i);
        return ans;
    }

    public boolean allUnique(String s, int start, int end) {
        Set<Character> set = new HashSet<>();
        for (int i = start; i < end; i++) {
            Character ch = s.charAt(i);
            if (set.contains(ch)) return false;
            set.add(ch);
        }
        return true;
    }

}
//Dcoder class must not be public
class Dcoder {

    public static void main(String[] args) {

	    System.out.println("003");

	    String s = "abcab!cbb";

        int ret = new Solution().lengthOfLongestSubstring(s);

        String out = String.valueOf(ret);

        System.out.print(out);
    }
}
