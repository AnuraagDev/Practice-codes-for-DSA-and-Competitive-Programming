#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> resultsArray(std::vector<int>& nums, int k) {
        std::vector<int> results;
        int n = nums.size();
        
        for (int i = 0; i <= n - k; ++i) {
            bool isConsecutive = true;
            int maxVal = nums[i];
            
            for (int j = i + 1; j < i + k; ++j) {
                if (nums[j] != nums[j - 1] + 1) {
                    isConsecutive = false;
                    break;
                }
                maxVal = std::max(maxVal, nums[j]);
            }
            
            if (isConsecutive) {
                results.push_back(maxVal);
            } else {
                results.push_back(-1);
            }
        }
        
        return results;
    }
};
