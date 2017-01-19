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


int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}

int main()
{
//freopen("in.txt","r",stdin);

    int n,r;

    while(scanf("%d %d",&n,&r)==2)
    {
        bool ara[10009]= {false};
        for(int i=1; i<=r; i++)
        {
            int x=sc();
            ara[x]=true;
            //printf("%d %d %d\n",x,ara[x],ara[x+1]);

        }
        int count=0;
        for(int i=1; i<=n; i++)
            if(!ara[i])
            {
                printf("%d ",i);
                count++;
            }

        if(!count)printf("*");
        printf("\n");
    }

    return 0;

}








