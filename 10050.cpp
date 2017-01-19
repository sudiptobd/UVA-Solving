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

    int t=sc();
    while(t--)
    {
        int n=sc();
        int p=sc();
        int h[p];
        for(int i=0; i<p; i++)h[i]=sc();
        int count=0;
        for(int i=1; i<=n; i++)
        {
            if(i%7==0||i%7==6)continue;
            for(int j=0; j<p; j++)
                if(i%h[j]==0)
                {
                    count++;
                    break;
                }
        }
        printf("%d\n",count);
    }

    return 0;

}

