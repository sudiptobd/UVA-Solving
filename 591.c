#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j=1;
    while(scanf("%d", &n),n!=0)
    {
        int ara[n],a=0,b=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            a=a+ara[i];
        }
        for(i=0;i<n;i++)
        {
           if ((a/n-ara[i])>0)
           b=b+(a/n-ara[i]);

        }
        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n\n",b);
        j++;
    }
    return 0;
}
