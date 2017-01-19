#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,n,k,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        if((k+p)%n==0) printf("Case %d: %d\n",i,n);
        else printf("Case %d: %d\n",i,(k+p)%n);
    }
    return 0;
}
