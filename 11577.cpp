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

    //printf("%d %d\n",'a','z');
    int t;
    scanf("%d",&t);
    getchar();
    char ara[1000];
    while(t--)
    {
        gets(ara);
        int len=strlen(ara);
        int a[255]={0};
        int maxi=0;
        for(int i=0;i<len;i++)
            if(isalpha(ara[i]))
            {
                a[tolower(ara[i])]++;
                if(maxi<a[tolower(ara[i])])maxi=a[tolower(ara[i])];
            }

        for(int i=97;i<123;i++ )
            if(a[i]==maxi)printf("%c",i);
        printf("\n");


    }

    return 0;

}
