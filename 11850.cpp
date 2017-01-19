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

        int n;
        while(scanf("%d",&n)&&n)
        {
            int ara[1423]={0};
            for(int i=0;i<n;i++)ara[sc()]=1;
            int count=0;
            int i;
            for( i=0;i<1423;i++)
            {
                count++;
                if(count>200)break;
                if(ara[i])count=0;
            }
            for( i=1422;i>=0;i--)
            {
                count++;
                if(count>200)break;
                if(ara[i])count=0;
            }

            if(count>200)printf("IMPOSSIBLE\n");
            else printf("POSSIBLE\n");
        }

    return 0;

}
