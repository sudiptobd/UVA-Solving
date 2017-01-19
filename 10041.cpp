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
        int s[n];
        for(int i=0; i<n; i++)s[i]=sc();
        int sum[505]={0};
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
               sum[i]+=max(s[i],s[j])-min(s[i],s[j]);
        int mini=9999999;
        int index=0;
        for(int i=0; i<n; i++)
            if(sum[i]<mini)mini=sum[i];
        printf("%d\n",mini);
    }

    return 0;

}

