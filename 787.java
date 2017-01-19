import java.util.Scanner;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.awt.*;
import java.applet.*;


public class Main
{
    public static void main(String []arg)
    {
        Scanner in=new Scanner(System.in);
        BigInteger[] b=new BigInteger[101];
        BigInteger end=new BigInteger("-999999");
        BigInteger temp;
        int n=0;
        while(in.hasNext())
        {
            temp=in.nextBigInteger();
            if(temp.compareTo(end)==0)
            {
                BigInteger mx=b[0];
                for(int i=0;i<n;i++)
                {
                    BigInteger x=BigInteger.ONE;
                    for(int j=i;j<n;j++)
                    {
                        x=x.multiply(b[j]);
                        mx=mx.max(x);
                    }
                }
                n=0;
                System.out.println(mx);
            }
            else b[n++]=temp;
            
        }
    }
}