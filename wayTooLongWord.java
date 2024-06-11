import java.util.Scanner;
public class wayTooLongWord
{
    public static void main(String args[])
    {Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        String a[]=new String[n];
        for(int i=0;i<n;i++)
        {
            a[i]=s.next();
        }
        for(int i=0;i<n;i++)
        {
            if(a[i].length()<=10)
            {
                System.out.println(a[i]);
            }
            else{
                System.out.println(a[i].charAt(0)+""+(a[i].length()-2)+""+a[i].charAt(a[i].length()-1));
            }
        }
        

    }
}