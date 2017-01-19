
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        
            
        BigInteger f,temp;
        int n,c=1;
        while(true)
        {
            n=in.nextInt();
            if(n==0)break;
            f=in.nextBigInteger();
            BigInteger sum=new BigInteger("0");
            while(n-->0)
            {
                temp=in.nextBigInteger();
                sum=sum.add(temp);
            }
            BigInteger avr=sum.divide(f);
            System.out.println("Bill #"+c+" costs "+sum+": each friend should pay "+avr+"\n");
            c++;
            
        }

    }

}
