import java.util.Scanner;
import java.math.BigInteger;
import java.math.BigDecimal;

public class Main {

    public static void main(String[] args) {

        BigInteger t;
        int a, b ,ti;
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            ti = in.nextInt();
            a = in.nextInt();
            b = in.nextInt();
            if (((a - b) * Math.log10(ti) > 99)||ti==1||a%b!=0||a<b) {
                System.out.println("(" + ti + "^" + a + "-1)/(" + ti + "^" + b + "-1) is not an integer with less than 100 digits.");
                continue;
            }
            if(a==b)
            {
                System.out.println("(" + ti + "^" + a + "-1)/(" + ti + "^" + b + "-1) 1");
                continue;
            }
            t=BigInteger.valueOf(ti);
            BigInteger res = (t.pow(a).subtract(BigInteger.ONE)).divide(t.pow(b).subtract(BigInteger.ONE));
            System.out.println("(" + t + "^" + a + "-1)/(" + t + "^" + b + "-1) " + res);
            
         
      
        }

    }
}
