class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxXor = (1 << maximumBit) - 1; // 2^maximumBit - 1
        int currentXor = 0;
        vector<int> result(nums.size());

        // Calculate the cumulative XOR of the entire array
        for (int num : nums) {
            currentXor ^= num;
        }

        // Process each query in reverse
        for (int i = nums.size() - 1; i >= 0; --i) {
            result[nums.size() - 1 - i] = currentXor ^ maxXor;
            currentXor ^= nums[i]; // Remove the last element
        }

        return result;
    }
};
