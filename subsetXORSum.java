public class subsetXORSum {
     public int subsetXORSum(int[] nums) {
        int xor_total = 0;
        int n = nums.length;
        
       
        int numSubsets = 1 << n;  
        
        for (int i = 0; i < numSubsets; i++) {
            int xor = 0;
            for (int j = 0; j < n; j++) {
               
                if ((i & (1 << j)) != 0) {
                    xor ^= nums[j];
                }
            }
            xor_total += xor;
        }
        
        return xor_total;
    }

}
