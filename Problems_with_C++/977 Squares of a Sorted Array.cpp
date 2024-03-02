class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {
		for (auto& i : nums) i = abs(i);
		sort(nums.begin(), nums.end());
		for (auto& i : nums) i *= i;
		return nums;
	}
};
