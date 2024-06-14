class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int> mp;
       int index;
       for(auto i: nums)
       {
        mp[i]++;
       } 
       for(auto i:nums)
       {
        if(mp[i]==1)index= i;
       }
return index;
    }
};
