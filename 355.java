import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String []arg)
    {
        Scanner in=new Scanner(System.in);
        while(in.hasNext())
        {
            int a=in.nextInt();
            int b=in.nextInt();
            String ab=in.next();
            BigInteger n=new BigInteger("1");
            String abc=new String("1");
            int flag=1;
            try
            {
               n=new BigInteger(ab,a);
              abc=n.toString(b).toUpperCase();
            }
            catch(Exception e)
            {
                System.out.println(ab+" is an illegal base "+a+" number");
                flag=0;
            }
            if(flag==1)System.out.println(ab+" base "+a+" = "+abc+" base "+b);
            
            
        }
    }
}
