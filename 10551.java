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
        
        while(true)
        {
            int b=in.nextInt();
            if(b==0)break;
            
            BigInteger x=new BigInteger(in.next(),b);
            BigInteger y=new BigInteger(in.next(),b);
            System.out.println(x.mod(y).toString(b));
            
        }
    }
}