#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n,i,j;
    for(i=1;i<=t;i++)
    {
        scanf("%d", &n);
        int ara[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&ara[j]);
            if(j>0 && ara[j]<ara[j-1]) ara[j]=ara[j-1];
        }
        printf("Case %d: %d\n",i,ara[n-1]);
    }
    return 0;
}
