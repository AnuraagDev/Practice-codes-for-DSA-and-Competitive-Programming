class ConcatinatedArray {
    public int[] getConcatenation(int[] nums) {
       int n=nums.length*2;
        int arr[]=new int[n];
        int j=0;
         for(int i=0;i<nums.length;i++)
        {
            arr[i]=nums[i];
            
        }

        for(int i=nums.length;i<n;i++)
        {
            arr[i]=nums[j];
            j++;
        }
        return arr;
    }
}