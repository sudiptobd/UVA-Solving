#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m;
        long int a,b,c,s,total=0;
        scanf("%d",&m);
        while(m--)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            s=a*c;
            total=total+s;
        }
        printf("%ld\n",total);
    }
    return 0;
}
