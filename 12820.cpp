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

int ck(char ara[100])
{
    int len=strlen(ara);
    if(len==1)return 0;
   // puts(ara);
    int ch[256]={0};
    for(int i=0;i<len;i++)ch[ara[i]]++;
    sort(ch,ch+256);
    //for(int i=0;i<256;i++)printf("%d ",ch[i]);
    for(int i=0;i<256;i++)
    {
        if(ch[i]&&ch[i]==ch[i-1])return 0;
    }

    return 1;

}

int main()
{
//freopen("in.txt","r",stdin);

    int n;
    int t=1;
    while(scanf("%d",&n)==1)
    {
        getchar();

        int count=0;
        char ara[100];
        while(n--)
        {

            gets(ara);
            count+=ck(ara);
        }

        printf("Case %d: %d\n",t++,count);


    }
    return 0;

}
