#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n,d,r;
    while(scanf("%d%d%d",&n,&d,&r),n!=0 && d!=0 && r!=0)
    {

        int ara[2][n],i,j,sum=0;

        for(i=0;i<2;i++)
            for(j=0;j<n;j++) scanf("%d",&ara[i][j]);

            sort(ara[0],ara[0]+n);
            sort(ara[1],ara[1]+n);

        for(j=0;j<n;j++)
            if(ara[0][j]+ara[1][n-1-j]>d)sum+=ara[0][j]+ara[1][n-1-j]-d;

        printf("%d\n",sum*r);
        sum=0;
    }
    return 0;
}
