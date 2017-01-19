#include<stdio.h>
#include<iostream>
#include<utility>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<deque>
#include<vector>
#include<ctype.h>
using namespace std;
#define lli long long int
#define gcd(a,b) __gcd(a,b)

int main()
{
//freopen("in.txt","r",stdin);


    int n;
    int cases=0;
    while(scanf("%d",&n)&&n)
    {
        if(cases++)printf("\n");
        bool flag=true;
        for(int i=1234;i<=99999;i++)
        {
            int f[10]={0};
            int x=i;
            if(i<10000)f[0]=1;
            while(x)
            {
                f[x%10]=1;
                //printf("%d",x%10);
                x=x/10;
            }
            x=i*n;
            while(x)
            {
                f[x%10]=1;
                //printf("%d",x%10);
                x=x/10;
            }
            //printf("\n");
            int j;
            for( j=0;j<10;j++)if(f[j]==0)break;
            //printf("%d\n",j);
            if(j<10)continue;
            if(i*n<=98765)
            {
                flag=false;
                if(i<10000)printf("%d / 0%d = %d\n",i*n,i,n);
                else printf("%d / %d = %d\n",i*n,i,n);
            }
            else break;
        }
        if(flag)printf("There are no solutions for %d.\n",n);

    }

return 0;

}
