#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int n,m;
    while(scanf("%lld",&n)&&n)
    {
        m=sqrt(n);
        if(n==m*m)printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
