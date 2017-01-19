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

int mode(char a[2000],int num)
{
    //printf("hell\n");
    int len=strlen(a);
    int mod=0;
    for(int i=0;i<len;i++)
	mod=(mod*10+(a[i]-'0'))%num;
	return mod;
}

int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}

int main()
{
//freopen("in.txt","r",stdin);

    //printf("%d\n",mode("10",9));
    int t=sc();

    while(t--)
    {
        getchar();
        char ara[2000];
        gets(ara);
        int len=strlen(ara);
        int n=sc();
        bool flag=true;
        while(n--)
        {
            int x=sc();

            if(flag)
            {
                //printf("%d\n",x);
                if(x==2){if((ara[len-1]-48)%2)flag=false;}
                else if(x==3)
                {
                    int sum=0;
                    for(int i=0;i<len;i++)sum+=ara[i]-48;
                    if(sum%3)flag=false;
                }
                else if(x==4){ if(mode(ara,4))flag=false;}
                else if(x==5) {if(ara[len-1]!='5'&&ara[len-1]!='0')flag=false;}
                else if(x==6) {if(mode(ara,6))flag=false;}
                else if(x==7) {if(mode(ara,7))flag=false;}
                else if(x==8) {if(mode(ara,8))flag=false;}
                else if(x==9) {if(mode(ara,9))flag=false;}
                else if(x==10){ if(ara[len-1]!='0')flag=false;}
                else if(x==11) {if(mode(ara,11))flag=false;}
                else if(x==12) {if(mode(ara,12))flag=false;}

            }
        }
        if(flag)printf("%s - Wonderful.\n",ara);
        else printf("%s - Simple.\n",ara);
    }

return 0;

}
