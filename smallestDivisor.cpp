class Solution {
public:
bool solve(int a,vector<int>&nums,int threshold){
    int sum=0;
    for(int i:nums){sum+=ceil((double)i/a);
   
    } cout<<sum<<endl;if(sum<=threshold)return true;
    return false;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int smallest=1;
        int largest=nums[0];
        int ans=1;
        for(int i:nums)largest=max(i,largest);
        while(smallest<=largest){
            int mid=(smallest+largest)/2;
            if(solve(mid,nums,threshold)){
                ans=mid;
                largest=mid-1;
            }else{
                smallest=mid+1;
            }
        }return ans;
            
        
    }
};
