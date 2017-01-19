#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int l;
        scanf("%d",&l);
        int a[l],j;
        for(j=0;j<l;j++)
        {
            scanf("%d",&a[j]);
        }
        int k,b,n=0,c;
        for(c=1;c<=l;c++)
        {
            for(j=1;j<l;j++)
        {
            if(a[j-1]>a[j])
            {
                n=n+1;
                b=a[j-1];
                a[j-1]=a[j];
                a[j]=b;
            }
        }

        }

        printf("Optimal train swapping takes %d swaps.\n",n);
    }
    return 0;
}
