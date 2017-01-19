#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t,count=1;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            int k;
            scanf("%d",&k);
            int ara[k],prev=0,max=0,n,i;
            for(i=0; i<k; i++)
            {
                scanf("%d",&n);
                ara[i]=abs(prev-n);
                prev=n;
                if(ara[i]>max)max=ara[i];
            }
            int fix=max;
            for(i=0; i<k; i++)
            {
                if(max==ara[i])max--;
                else if(max<ara[i]){fix++;break;}
            }

            printf("Case %d: %d\n",count++,fix);
        }
    }
    return 0;
}
