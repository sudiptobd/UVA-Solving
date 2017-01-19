import java.util.Scanner;
import java.math.BigInteger;
import java.math.BigDecimal;

public class Main {

    public static void main(String[] args) {

        BigInteger ara[] = new BigInteger[1005];
        for (int i = 0; i < 1005; i++) {
            ara[i] = BigInteger.ZERO;
        }
        ara[1] = BigInteger.valueOf(2);
        ara[2] = BigInteger.valueOf(5);
        ara[3] = BigInteger.valueOf(13);
        for (int i = 4; i <= 1004; i++) {
            ara[i] = ara[i - 1].multiply(BigInteger.valueOf(2)).add(ara[i - 2]).add(ara[i - 3]);
        }
        
        int n;
        Scanner in=new Scanner(System.in);
        while(in.hasNext())
        {
            n=in.nextInt();
            System.out.println(ara[n]);
        }

    }

}
