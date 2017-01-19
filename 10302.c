#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int i,sum=0,n;
    while(scanf("%lld",&n)==1)
    {
        for( i=1;i<=n;i++)sum=sum+i*i*i;
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
