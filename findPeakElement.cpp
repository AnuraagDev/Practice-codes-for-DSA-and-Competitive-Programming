class Solution {
public:
    int findPeakElement(vector<int>& arr) {if(arr.size()==1)return 0;
        int low=0,high=arr.size()-1;
        if(arr.size()==2){
            if(arr[0]>arr[1])return 0;
            return 1;
        }
        while(low<high){
            int mid=low+(high-low)/2;
            if(mid==0||mid==arr.size()-1||(arr[mid]>arr.at(mid-1)&&arr[mid]>arr.at(mid+1)))return mid;
            if(arr[mid]<arr[mid+1])low=mid+1;
            else{
                high=mid;
            }
        }return low;

    }
};
