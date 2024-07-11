#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int solve(int i, vector<int>& nums, int k) {
    int n = nums.size();
    if (i == n - 1) return 0;
    if (dp[i] != -1) return dp[i];

    int ans = INT_MAX;
    for (int j = 1; j <= k; j++) {
        int net = i + j;
        if (net < n) {
            ans = min(ans, solve(net, nums, k) + abs(nums[net] - nums[i]));
        }
    }
    return dp[i] = ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    
    dp.resize(n, -1);
    int result = solve(0, nums, k);
    cout << result << endl;
    
    return 0;
}
