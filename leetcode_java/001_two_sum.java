class _001 {
	public int[] twoSum(int[] nums, int target) {
		for (int i = 0; i < nums.length; i++) {
			for (int j = i + 1; j < nums.length; j++) {
				if (nums[j] == target - nums[i]) {
					return new int[] { i, j };
				}
			}
		}
		throw new IllegalArgumentException("No two sum solution");
	}

	public static void main(String[] args) {
		System.out.println("001");
		int[] nums = {2, 7, 11, 15};
		int target = 9;
		_001 a = new _001();
		int[] result = a.twoSum(nums, target);
        System.out.println(result[0] + " " + result[1]);
	}
}