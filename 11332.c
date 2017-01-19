#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int g(long long int n)
{
    int sum=0;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    long long int n;
    while(scanf("%lld",&n),n!=0)
    {
        while(n>9)n=g(n);
        printf("%lld\n",n);
    }

    return 0;
}
