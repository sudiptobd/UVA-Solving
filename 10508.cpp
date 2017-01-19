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
#define D double
#define gcd(a,b) __gcd(a,b)
#define EPS 1e-9

int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}

D scd()
{
    D n;
    scanf("%lf",&n);
    return n;
}


int main()
{
//freopen("in.txt","r",stdin);

        int n,m;
        while(scanf("%d %d",&n,&m)==2)
        {
            getchar();
            char ara[n+1][m+1];
            gets(ara[0]);
            gets(ara[n-1]);


            for(int i=1;i<n-1;i++)
            {
                char take[m+1];
                gets(take);

                int count=0;
                for(int j=0;j<m;j++)
                    if(ara[0][j]!=take[j])count++;
                strcpy(ara[count],take);
                //puts(ara[count]);
                //printf(" %d\n",count);
            }



            for(int i=0;i<n;i++)
                printf("%s\n",ara[i]);



        }


    return 0;

}


