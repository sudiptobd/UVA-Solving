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

    char ara[1000];
    while(gets(ara))
    {
        int len=strlen(ara);
        if('0'<=ara[0]&&ara[0]<='9')
        {
            for(int i=len-1; i>=0; i--)
            {
                if(((ara[i]-48)*10+(ara[i-1]-48)>=30))
                {
                    printf("%c",(ara[i]-48)*10+(ara[i-1]-48));
                    i=i-1;
                }
                else
                {
                    printf("%c",(ara[i]-48)*100+(ara[i-1]-48)*10+(ara[i-2]-48));
                    i=i-2;
                }
            }
            printf("\n");
        }
        else
        {
            for(int i=len-1; i>=0; i--)
            {
                int n=ara[i];
                while(n)
                {
                    printf("%d",n%10);
                    n=n/10;
                }
            }
            printf("\n");

        }
    }

    return 0;

}
