#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int a,b,i;
    while(scanf("%llu %llu",&a,&b)==2)
    {
        i=a;
        while(a<b)
        {
            i++;
            a=a+i;
        }
        printf("%llu\n",i);

    }
    return 0;
}
