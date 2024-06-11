import java.util.HashMap;
import java.util.Scanner;

public class matchpair {  
    public static int match(int[] a) {
       int n=a.length;
        int count=0;
        int arr[]=new int[a.length];
        int arr1[]=new int[a.length];
        for(int i=0;i<a.length;i++)
        {
            arr[i]=a[i]-i;
arr[i]=a[i]-i;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr1[j])
                {
                    count++;
                }
            }
        }
        return count;
        
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int q = s.nextInt();  // Number of test cases

        // Loop through each test case
        for (int k = 0; k < q; k++) {
            int z = s.nextInt();  // Size of the array for this test case
            int[] t = new int[z];

            // Read the array elements
            for (int i = 0; i < z; i++) {
                t[i] = s.nextInt();
            }

            // Print the result for this test case
            System.out.println(match(t));
        }

        s.close();  // Close the scanner
    }
}
