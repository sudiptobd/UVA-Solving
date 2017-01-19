#include<stdio.h>
#include<iostream>
#include<utility>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<deque>
#include<vector>
#include<ctype.h>
using namespace std;
#define lli long long int
#define gcd(a,b) __gcd(a,b)

lli sc()
{
    lli n;
    scanf("%lld",&n);
    return n;
}

lli res(lli n)
{
    lli sum= 0;
    while (n)
    {
        int x = n % 10;
        n /= 10;
        sum += (1 + x) * x / 2 + 45 * n;
    }
    return sum;
}


int main()
{
//freopen("in.txt","r",stdin);
    lli p,q,x,i;
    //printf("%d",0%10);
    while((p=sc())>=0&&(q=sc())>=0)
    {

        if(p==q)printf("%lld\n",res(p));
        else printf("%lld\n",res(q)-res(p-1));

       /* lli sum=0,y;
        for( y=p; y<=q; y++)
        {
            x=y;
            //while(x%10==0&&x>0)x/=10;
            i=x%10;
            if(i==0)break;
            else sum+=i;
        }
        //printf("%lld %lld\n",y,sum);

        for(y+=10;y<q;y+=10)
        {
                x=y;
                while(x%10==0&&x>0)x/=10;
                i=x%10;
                sum+=i+45;

        }

        y-=10;
        if(y%10==0&&q%10!=0)sum--;
        //printf("%lld %lld\n",sum,y);

        for( ; y<=q; y++)
        {
            x=y;
            while(x%10==0&&x>0)x/=10;
            i=x%10;
            sum+=i;
        }
        printf("%lld\n",sum);

        //printf("%lld ",i);
        /*lli sum=i;
        if(p%10==0)i=1;
        else i++;
        for(lli j=p+1; j<=q; j++,i++)
        {
            if(i==10)
            {
                x=j;
                while(x%10==0&&x>0)x/=10;
                i=x%10;
                sum+=i;
               // printf("%lld-%lld-%lld ",i,j,sum);
                i=0;
                continue;
            }
            sum+=i;
          // printf("%lld-%lld-%lld ",i,j,sum);

        }
        printf("%lld\n",sum);
        */
    }
    return 0;

}





