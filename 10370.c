#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,n,i;
    double p,count=0,dn,av=0; char ps='%';
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            av+=a[i];
        }
        av=av/n;
        for(i=0;i<n;i++)if(a[i]>av)count++;
        dn=n;
        p=100*count/dn;
        printf("%0.3lf%c\n",p,ps);
        count=0,av=0;

    }

    return 0;
}
