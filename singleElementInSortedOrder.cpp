class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = (low + high) / 2;

            // Ensure 'mid' is even to compare pairs correctly
            if (mid % 2 == 1) {
                mid--;
            }

            // Compare mid and mid + 1, they should be the same in pairs
            if (nums[mid] == nums[mid + 1]) {
                // The single element is in the right half
                low = mid + 2;
            } else {
                // The single element is in the left half or at mid
                high = mid;
            }
        }

        // When low meets high, it points to the single element
        return nums[low];
    }
};
