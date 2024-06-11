import java.util.Scanner;
public class WrongSub{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        for(int i=0;i<k;i++)
        {
            if(n%10==0)
            {
                n/=10;

            }
            else  {
                n-=1;
            }
        }
        System.out.println(n);
    }
}