class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> vec;
      /*Explanation: We used bit manipulation to find the total subset and 
      as the numbers in the vector given can be repeated so we used set to store all possible subsets and
      we sorted the array because the question out put contained all the subsets as sorted array.*/
        sort(nums.begin(),nums.end());
        int length=1<<nums.size();
        for(int i=0;i<length;i++)
        {vector<int>a;
            for(int j=0;j<nums.size();j++){
        
                if(i&(1<<j))
                {
                    a.push_back(nums[j]);
                }
            }
            
            vec.insert(a);
        }return vector<vector<int>>(vec.begin(),vec.end());
    }
};
