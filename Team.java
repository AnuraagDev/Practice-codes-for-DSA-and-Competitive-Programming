import java.util.Scanner;
public class Team{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n =s.nextInt();
       int count=0;
        for(int i=0;i<n;i++)
        {
            int a=s.nextInt();
            int b=s.nextInt();
            int c=s.nextInt();
            if(a+b+c>=2)
            {
                count++;
            }
        }
       System.out.println(count);
    }
}