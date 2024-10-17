class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;  // Hashmap to store number and its index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};  // Return the indices if complement found
            }
            num_map[nums[i]] = i;  // Store the current number and its index in the hashmap
        }
        return {};  // Return an empty vector if no solution is found (though problem guarantees one solution)
    }
};
