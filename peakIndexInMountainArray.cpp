class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
    
        
        while(high>=low){
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
        {
            return mid;
            break;

        }
       else if(arr[mid]<arr[mid+1])
        {
            low=mid+1;
        }
       else
        {
            high=mid;
            
        }
        }
        return low;
    }
};
