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
    char ara[20];
    int big[11]= {0};
    int low[11]= {0};
    while(scanf("%d",&n)&&n)
    {
        getchar();
        gets(ara);

        if(!strcmp(ara,"too high"))big[n]=1;
        else if(!strcmp(ara,"too low"))low[n]=1;
        else
        {
            int i;
            for( i=0; i<11; i++)
                if((big[i]&&n>=i)||(low[i]&&n<=i))break;
            if(i<11)printf("Stan is dishonest\n");
            else printf("Stan may be honest\n");

            memset(big,0,sizeof big);
            memset(low,0,sizeof low);

        }





    }

    return 0;

}
