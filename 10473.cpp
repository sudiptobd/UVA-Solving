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
    char ara[100];
    while(gets(ara))
    {
        int n;
        if(strlen(ara)>1&&ara[1]=='x')
        {
            sscanf(ara,"%x",&n);
            printf("%d\n",n);
        }
        else if(strlen(ara)>2&&ara[2]=='x')
        {
            sscanf(ara,"%x",&n);
            printf("%d\n",n);
        }
        else
        {
            sscanf(ara,"%d",&n);
            if(n<0)break;
            sprintf(ara,"%x",n);
            int len=strlen(ara);
            for(int i=0;i<len;i++)
                ara[i]=toupper(ara[i]);
            printf("0x%s\n",ara);
        }

    }

return 0;

}
