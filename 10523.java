import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main(String []arg)
    {
        Scanner in= new Scanner(System.in);
        int n,a;
        while(in.hasNextInt())
        {
            n=in.nextInt();
            a=in.nextInt();
            BigInteger sum=new BigInteger("0");
            BigInteger ab=BigInteger.valueOf(a);
            for(int i=1; i<=n; i++)
                sum=sum.add(BigInteger.valueOf(i).multiply(ab.pow(i)));
            System.out.println(sum);
        }

    }
}
