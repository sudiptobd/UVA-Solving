#include <stdio.h>
#include <stdlib.h>

long a[30001];
int coin[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};

int main()
{
    int i,j;
    for(i=0;i<30001;i++)a[i]=0;
    a[0]=1;
    for(i=0;i<11;i++)
        for(j=0;j<30001;j++)
            if(j>=coin[i])a[j]+=a[j-coin[i]];

    int dol,pen;
    while(scanf("%d.%d",&dol,&pen))
    {
        if(dol==0&&pen==0)break;
        int sum=dol*100+pen;
        float b=(float)sum/100;
        printf("%6.2f%17ld\n",b,a[sum]);
    }

    return 0;
}
