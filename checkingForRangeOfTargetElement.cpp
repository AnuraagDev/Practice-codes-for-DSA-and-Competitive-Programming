#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target; cin >> target;
    int low = 0;
    int high = nums.size() - 1;
    int index = -1;

    // Find the first occurrence of target
    while (high >= low) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            index = mid;
            high = mid - 1; // Search in the left half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index == -1) {
        cout << "Target not found" << endl;
        return 0;
    }

    int firstIndex = index;
    low = index;
    high = nums.size() - 1;

    // Find the last occurrence of target
    while (high >= low) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            index = mid;
            low = mid + 1; // Search in the right half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    int lastIndex = index;

    if (firstIndex == lastIndex) {
        cout << "Only one index found: " << firstIndex << endl;
    } else {
        cout << "The range is " << firstIndex << " : " << lastIndex << endl;
    }

    return 0;
}
