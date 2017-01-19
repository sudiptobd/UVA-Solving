#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    int i,b1count=0,b2count=0,k;
    int bin[16]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        k=m;
        while(m!=1)
        {
            if(m%2==1)b1count++;
            m=m/2;
        }
        b1count++;

        while(k!=0)
        {
            b2count=b2count+bin[k%10];
            k=k/10;
        }

        printf("%d %d\n",b1count,b2count);
        b1count=0;
        b2count=0;

    }
    return 0;
}
