class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) { 
        deque <int> dq;
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            while(!dq.empty() and nums[dq.back()]<=nums[i])dq.pop_back();
            dq.push_back(i);
            if(i>=k-1){
                while(!dq.empty() and dq.front()<i-k+1)dq.pop_front();
                res.push_back(nums[dq.front()]);
            }
        }return res;
    }
};
