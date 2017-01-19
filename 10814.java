import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String []args)
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        for(int i=1;i<=n;i++)
        {
            BigInteger p=in.nextBigInteger();
            in.next();
            BigInteger q=in.nextBigInteger();
            BigInteger gcdx=p.gcd(q);
            System.out.println(p.divide(gcdx)+" / "+q.divide(gcdx));
            
        }
        
    }
}