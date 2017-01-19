import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    
    public static void main(String []args) 
    {   
       
       BigInteger level=new BigInteger( Integer.MAX_VALUE+"");
       String s;
       Scanner in=new Scanner(System.in);
       while (in.hasNext()) {
            String line = in.nextLine();
            String splt[] = line.split(" ");
            BigInteger a=new BigInteger(splt[0]);
            s=splt[1];
            BigInteger b=new BigInteger(splt[2]);
           System.out.println(line);
           if(a.compareTo(level)==1)System.out.println("first number too big");
           if(b.compareTo(level)==1)System.out.println("second number too big");
           BigInteger res;
           if("+".equals(s))res=a.add(b);
           else res=a.multiply(b);
           //System.out.println(res);
           if(res.compareTo(level)==1)System.out.println("result too big");
           
       }
    
        
    }
}