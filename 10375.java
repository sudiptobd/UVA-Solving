import java.util.Scanner;
import java.math.BigDecimal;
import java.math.RoundingMode;

public class Main
{
    
    public static void main(String arg[])
    {   
        Scanner in=new Scanner(System.in);
        BigDecimal ara[]=new BigDecimal[10001];
        ara[0]=BigDecimal.ONE;
        for(int i=1;i<=10000;i++)ara[i]=ara[i-1].multiply(BigDecimal.valueOf(i));
        int  p,q,r,s;
        while(in.hasNext())
        {
            p=in.nextInt();
            q=in.nextInt();
            r=in.nextInt();
            s=in.nextInt();
             
            BigDecimal ans1=ara[p].divide(ara[q],1000,RoundingMode.HALF_UP).divide(ara[p-q],1000,RoundingMode.HALF_UP);
            BigDecimal ans2=ara[r].divide(ara[s],1000,RoundingMode.HALF_UP).divide(ara[r-s],1000,RoundingMode.HALF_UP);
            BigDecimal ans=ans1.divide(ans2,1000,RoundingMode.HALF_UP);
            System.out.println(ans.setScale(5,RoundingMode.HALF_UP));       
        }
        
        
    }
}