import java.util.Scanner;
import java.math.BigDecimal;

public class Main
{
    public static void main(String arg[])
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        while(n-->0)
        {   
            BigDecimal a=new BigDecimal("0");
            BigDecimal sum=new BigDecimal("0");
            BigDecimal num=new BigDecimal("0");
            while(true)
            {   
                num=in.nextBigDecimal();
                if(num.equals(a))break;
                sum=sum.add(num);
            }
            char output [] = sum.toString().toCharArray();
            int len = output.length - 1;
             
            while ( len >= 0 && output [len] == '0' ) len--;
            if ( len >= 0 && output [len] == '.' ) len--;
            for ( int i = 0; i <= len; i++ ) System.out.print (output [i]);
            System.out.println ();
            
        }
        
    }
}