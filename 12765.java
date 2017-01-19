import java.util.Scanner;
import java.math.BigInteger;
import java.math.BigDecimal;

public class Main {

    public static void main(String[] args) {

        BigInteger f[] = new BigInteger[11];
        f[0] = BigInteger.ONE;
        for (int i = 1; i < 11; i++) {
            f[i] = f[i - 1].multiply(BigInteger.valueOf(i));
           
        }
        

        Scanner in = new Scanner(System.in);
        while (true) {
            int n, m;
            n = in.nextInt();
            m = in.nextInt();
            if(n==0&&m==0)break;
            int a[] = new int[10];
            int b[] = new int[10];
            for(int i=0;i<10;i++)a[i]=b[i]=0;
            for (int i = 0; i < n; i++) {
                a[in.nextInt()]++;
            }
            for (int i = 0; i < m; i++) {
                b[in.nextInt()]++;   
            }
            for(int i=0;i<10;i++)
               if(a[i]>b[i])
               {
                   a[i]-=b[i];
                   b[i]=0;
               }
               else if(a[i]<b[i])
               {
                   b[i]-=a[i];
                   a[i]=0;
               }
               else a[i]=b[i]=0;
            
            BigInteger ba=BigInteger.ONE,bb=BigInteger.ONE;
            for(int i=0;i<10;i++)
            {   
                
                if(a[i]!=0)
                {   
                     //System.out.println(f[i]);
                    for(int j=0;j<a[i];j++)ba=ba.multiply(f[i]);
                }
                if(b[i]!=0)
                {
                    for(int j=0;j<b[i];j++)bb=bb.multiply(f[i]);
                }
            }
            
            if(bb.equals(ba))
            {
                System.out.println("YES");
            }
            else System.out.println("NO");
            

        }

    }

}


