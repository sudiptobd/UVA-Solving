#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int a,b,count=0,s;
    while(scanf("%lld%lld",&a,&b),a!=0,b!=0)
    {
        int i;
        for(i=a;i<=b;i++)
        {
            s=(int)sqrt(i);
            if(s*s==i)count++;
        }
        printf("%d\n",count);
        count=0;
    }

    return 0;
}
