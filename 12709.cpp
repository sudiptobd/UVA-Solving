#include<stdio.h>
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
#include<iostream>
using namespace std;
#define inf 999999
#define MAX 100
#define gcd(a,b) __gcd(a,b)
int getInt(){int x;scanf("%d",&x);return x;}
long long getLongLong(){long long x;scanf("%lld",&x);return x;}
double getDouble(){double x;scanf("%lf",&x);return x;}
char getChar(){char x;scanf("%c",&x);return x;}
#define Int getInt()
#define Char getChar()
#define Long getLongLong()
#define Double getDouble()
////////////////////////////////////


int main()
{
//freopen("in.txt","r",stdin);
int n;
while((n=Int)&&n>0)
{

    int vol=0,v,l,w,h,H=0;
    for(int i=0;i<n;i++)
    {
        l=Int;
        w=Int;
        h=Int;
        v=l*w*h;
        if(H<h)
        {
            vol=v;
            H=h;

        }
        else if(H==h&&vol<v)
        {
            vol=v;
        }
    }



printf("%d\n",vol);
}
return 0;

}
