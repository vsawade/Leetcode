class Solution {
public:
    int largestCombination(std::vector<int>& candidates) {
        int maxCount = 0;

        // Check each bit position from 0 to 24
        for (int bit = 0; bit < 24; ++bit) {
            int count = 0;
            for (int num : candidates) {
                if (num & (1 << bit)) {
                    count++; // Count how many numbers have a 1 at this bit position
                }
            }
            maxCount = std::max(maxCount, count); // Update max count if this bit position has more 1s
        }
        
        return maxCount;
    }
};
