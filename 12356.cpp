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
#define lli long long int
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
    int m,n;
    while((m=Int)&&(n=Int))
    {
       int l[m+1],r[m+1];
       for(int i=1;i<=m;i++)
       {
           l[i]=i-1;
           r[i]=i+1;
       }
       while(n--)
       {
           int x=Int;
           int y=Int;

           if(l[x]<1)printf("* ");
           else printf("%d ",l[x]);

           if(r[y]>m)printf("*\n");
            else printf("%d\n",r[y]);

            r[l[x]]=r[y];
            l[r[y]]=l[x];


       }
         printf("-\n");
    }
return 0;

}
