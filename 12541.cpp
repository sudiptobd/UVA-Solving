#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;


int main ()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        getchar();
        char name[n][20];
        int d[n],m[n],y[n],sum[n];
        for(int i=0;i<n;i++)
        {
            scanf("%s %d %d %d",name[i],&d[i],&m[i],&y[i]);
            sum[i]=y[i]*10000+m[i]*100+d[i];
        }

        int max=0,min=0;
        for(int i=1;i<n;i++)
        {
             if(sum[max]<sum[i])max=i;
             if(sum[min]>sum[i])min=i;
        }
        printf("%s\n%s\n",name[min],name[max]);

    }
    return 0;
}

