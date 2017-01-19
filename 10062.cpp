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

    char ara[2000];
    int t=0;
    while(gets(ara))
    {
        if(t)printf("\n");
        t++;
        int len=strlen(ara);
        int ch[256]= {0};
        for(int i=0; i<len; i++)ch[ara[i]]++;
        vector<int>v[2000];
        for(int i=0; i<256; i++)v[ch[i]].push_back(i);
        for(int i=1; i<2000; i++)
            if(v[i].size())
            {
                sort(v[i].begin(),v[i].end());
                for(int j=v[i].size()-1;j>=0;j--)
                    printf("%d %d\n",v[i][j],i);
            }


    }
    return 0;

}
