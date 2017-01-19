#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n][10],i,j,k;
    for(i=0;i<n;i++)
    {
       scanf("%d", &k);
       for(j=0;j<k;j++)
       {
         scanf("%d", &ara[i][j]);
       }
       printf("Case %d: %d\n",i+1, ara[i][(k/2)]);
    }
    return 0;
}
