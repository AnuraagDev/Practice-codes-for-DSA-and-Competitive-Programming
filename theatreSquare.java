import java.util.*;

public class theatreSquare {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int c = s.nextInt();
        
      
        double d = Math.ceil((double) a / c);
        double e = Math.ceil((double) b / c);
        
      
        s.close();
        
      

       
        System.out.println((long)(d * e)); 
}}
