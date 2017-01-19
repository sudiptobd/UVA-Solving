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



char ara[1000005];

int main()
{
//freopen("in.txt","r",stdin);

    int t;
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        gets(ara);
        //printf("[%s]\n",ara);

        int n;
        scanf("%d",&n);
        //printf("%d\n",n);
        getchar();

        int ch[100];
        for(int i='A';i<='_';i++)ch[i]=i;

        while(n--)
        {
            char a , b;
            scanf("%c %c",&a,&b);
            getchar();
            //printf("%c %c\n",a,b);

            for(int i='A';i<='_';i++)
                if(ch[i]==b)ch[i]=a;
        }

        int len=strlen(ara);
        for(int i=0;i<len;i++)printf("%c",ch[ara[i]]);
        printf("\n");

    }


    return 0;

}












