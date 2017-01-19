#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int a,b,c,i;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d", &a,&b,&c);

        if((b<a&&a<c)||(c<a&&a<b)) printf("Case %d: %d\n",i,a);
        if((a<b&&b<c)||(c<b&&b<a)) printf("Case %d: %d\n",i,b);
        if((b<c&&c<a)||(a<c&&c<b)) printf("Case %d: %d\n",i,c);
    }
    return 0;
}
