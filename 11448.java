
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        int n;
        n=in.nextInt();
        while(n-->0)
        {
           BigInteger a,b;
           a=in.nextBigInteger();
           b=in.nextBigInteger();
          System.out.println(a.subtract(b));
           
            
         }

    }

}
