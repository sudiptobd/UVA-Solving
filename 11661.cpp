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
    while(scanf("%d",&n)&&n)
    {
        getchar();
        char ara[n+1];
        gets(ara);
        int mini=2000000;
        int count=1;
        int r=-1;
        int d=-1;

        for(int i=0; i<n; i++)
        {
            if(ara[i]=='.')continue;
            else if(ara[i]=='Z')
            {
                mini=0;
                break;
            }
            else if(ara[i]=='D')
            {
                d=i;
                if(r!=-1&&(i-r)<mini)mini=i-r;
            }
            else
            {
                r=i;
                if(d!=-1&&(i-d)<mini)mini=i-d;
            }
        }
        printf("%d\n",mini);


    }
    return 0;
}
