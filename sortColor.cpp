class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        nums.clear();
        for(int i=0;i<mp[0];i++)
        {
            nums.push_back(0);
        }
         for(int i=0;i<mp[1];i++)
        {
            nums.push_back(1);
        }
         for(int i=0;i<mp[2];i++)
        {
            nums.push_back(2);
        }
    
    }
};
