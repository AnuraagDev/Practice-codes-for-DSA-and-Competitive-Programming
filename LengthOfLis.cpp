class Solution {
public:vector<vector<int>>dp;
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty())return 0;
        dp.resize(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(0,-1,nums);
    }
    int solve(int i,int prev,vector<int>&nums){
        if(i>=nums.size())return 0;
        if(prev!=-1){
        if(dp[i][prev]!=-1)return dp[i][prev];}
        if(prev==-1)return max(solve(i+1,i,nums)+1,solve(i+1,prev,nums));
        else {
            int ans=solve(i+1,prev,nums);
            if(nums[i]>nums[prev])ans=max(ans,solve(i+1,i,nums)+1);
            return dp[i][prev] =ans;
        }
    }
};
