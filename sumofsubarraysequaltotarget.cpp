#include<bits/stdc++.h>
using namespace std;

int cntSubarrays(vector<int> arr, int sum) {
    unordered_map<int, int> prevSum;
    int n = arr.size();
    int res = 0;
    int currsum = 0;

    for (int i = 0; i < n; i++) {
        currsum += arr[i];

        if (currsum == sum)
            res++;

        if (prevSum.find(currsum - sum) != prevSum.end())
            res += prevSum[currsum - sum];

        prevSum[currsum]++;
    }

    return res;
}

int main() {
    int n, sum;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cin >> sum;

    int result = cntSubarrays(arr, sum);
    cout << "Number of subarrays with given sum: " << result << endl;

    return 0;
}
