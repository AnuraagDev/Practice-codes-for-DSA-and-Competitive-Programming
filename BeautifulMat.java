import java.util.Scanner;
public class BeautifulMat
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int row=0;
        int col=0;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                int a=s.nextInt();
                if(a==1)
                {   row=i;
                    col=j;

                }
            }
        }
        int sum=Math.abs(2-row)+Math.abs(2-col);
        System.out.println(sum);
    }
}