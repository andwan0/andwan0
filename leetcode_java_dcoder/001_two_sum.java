package two_sum;

class Solution {
    /*
    Approach 1: Brute Force
    The brute force approach is simple. Loop through each element x and
    find if there is another value that equals to target - x.
     */
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[j] == target - nums[i]) {
                    return new int[]{i, j};
                }
            }
        }
        throw new IllegalArgumentException("No two sum solution");
    }

}
//Dcoder class must not be public
class Dcoder {
    public static String integerArrayToString(int[] nums, int length) {
        if (length == 0) {
            return "[]";
        }

        String result = "";
        for(int index = 0; index < length; index++) {
            int number = nums[index];
            result += Integer.toString(number) + ", ";
        }
        return "[" + result.substring(0, result.length() - 2) + "]";
    }

    public static String integerArrayToString(int[] nums) {
        return integerArrayToString(nums, nums.length);
    }

	public static void main(String[] args) {
		System.out.println("001");
		int[] nums = {2, 7, 11, 15};
		int target = 9;

        int[] ret = new Solution().twoSum(nums, target);

        String out = integerArrayToString(ret);

        System.out.print(out);
	}
}