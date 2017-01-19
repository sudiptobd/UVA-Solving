import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String arg[])
    {
        Scanner in=new Scanner(System.in);
       BigInteger a=new BigInteger("1");
       BigInteger b=new BigInteger("1");
       BigInteger sum=new BigInteger("1");
       while(in.hasNextBigInteger())
       {
           a=in.nextBigInteger();
           b=in.nextBigInteger();
           sum=a.multiply(b);
           System.out.println(sum);
       }
       
        
    }
}