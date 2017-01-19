#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;

    while(scanf("%lld",&n)==1)
    {
        int i=0,v=0,x=0,l=0,c=0,d=0,m=0;

        if(n>=1000){ m=n/1000; n=n%1000; }
        if(n>=500){ d=n/500; n=n%500; }
        if(n>=400){d=d+1;c=c+1;n=n%400;}
        if(n>=100){ c=c+n/100; n=n%100; }
        if(n>=50){ l=n/50; n=n%50; }
        if(n>=40){l=l+1;x=x+1;n=n%40;}
        if(n>=10){ x=x+n/10; n=n%10; }

        if(n==9){x=x+1;i=i+1; n=n%9;}

        if(n>=5){ v=n/5; n=n%5; }

        if(n>=1) i=i+n/1;

        printf("%d\n",m*4+d*3+c*2+l*2+x*2+v*2+i);
    }
    return 0;
}
