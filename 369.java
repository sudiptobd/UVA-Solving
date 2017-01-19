
import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static BigInteger fact(BigInteger x) 
    {
        if (x.compareTo(new BigInteger("1")) == 0 || x.compareTo(new BigInteger("0")) == 0) 
            return new BigInteger("1");
        else  return x.multiply(fact(x.subtract(new BigInteger("1"))));
    }

    public static void main(String arg[]) {
        Scanner in = new Scanner(System.in);
        BigInteger n = new BigInteger("1");
        BigInteger m = new BigInteger("1");

        while (true) {
            n = in.nextBigInteger();
            m = in.nextBigInteger();
            if (n.equals(new BigInteger("0")) && m.equals(new BigInteger("0"))) {
                break;
            }
            BigInteger lob = new BigInteger("1");
            BigInteger hor = new BigInteger("1");
            lob =fact(n);
            hor=fact(n.subtract(m));
            hor=hor.multiply(fact(m));
            System.out.println(n+" things taken "+m+" at a time is "+lob.divide(hor)+" exactly.");
            
        }
    }
}
