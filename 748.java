import java.util.Scanner;
import java.math.BigInteger;
import java.math.BigDecimal;

public class Main
{
    
    public static void main(String []args) 
    {   
       
      BigDecimal a;
      int n;
      Scanner in=new Scanner(System.in);
      
      while(in.hasNext())
      {
          a=in.nextBigDecimal();
          n=in.nextInt();
          String s=a.pow(n).stripTrailingZeros().toPlainString();
          int i=0;
          while(s.charAt(i)=='0')i++;
          int len=s.length();
          for(int j=i;j<len;j++)System.out.print(s.charAt(j));
          System.out.println();
          
      }
    
        
    }
}