import java.util.*;
public class HelpulMaths{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String q=s.nextLine();
        String a[]=q.split("\\+");
        int arr[]=new int[a.length];
        int j=0;
        for(String b:a)
        {
            arr[j]=Integer.parseInt(b);
            j++;
        }
        Arrays.sort(arr);
        System.out.print(arr[0]);
        for(int i=1;i<arr.length;i++)
        {
            System.out.print("+"+arr[i]);
        }
    }
}