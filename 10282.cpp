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
    map<string ,string >m;
    while(gets(ara))
    {
        if(strlen(ara)==0)break;
        char a[20],b[20];
        sscanf(ara,"%s %s",a,b);
        m[b]=a;
    }
    char a[20];
    while(gets(a))
    {
        if(m[a].size())cout<<m[a]<<endl;
        else printf("eh\n");
    }



    return 0;

}
