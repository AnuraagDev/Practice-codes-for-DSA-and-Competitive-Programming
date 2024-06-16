class Solution {
public:
    bool checkpossible(vector<int>& piles,int k,int h)
    {   int hours=0;
        for(int i=0;i<piles.size();i++)
        {   hours += ceil(static_cast<double>(piles[i]) /k);
            
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int min_s=1,max=piles[0];
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]>max)max=piles[i];
        }
        int low=1,high=max;
        int k;
        while(low<high){
        int    mid=(low+high)/2;
            if(checkpossible(piles,mid,h))
            {high=mid;}
            else{
                low=mid+1;
            }
        }return low;
    }
};
