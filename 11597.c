#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    while(scanf("%d",&n),n!=0)
    {
        printf("Case %d: %d\n",i,n/2);
        i++;
    }
    return 0;
}
