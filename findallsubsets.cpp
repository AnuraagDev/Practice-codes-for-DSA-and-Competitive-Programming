class Solution {
public:
vector<vector<int>>ans;
void find_all_subs(int ind,vector<int>&sub,vector<int>&nums)
{
    int n=nums.size();
    if(ind==n){
        ans.push_back(sub);
        return;
    }
    //case 1 :: take at index ind
    sub.push_back(nums[ind]);
    find_all_subs(ind+1,sub,nums);
    //case 2 : don't take at index ind
    sub.pop_back();
    find_all_subs(ind+1,sub,nums);
    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        find_all_subs(0,sub,nums);
        return ans;
    }
};
