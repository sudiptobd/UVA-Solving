#include <iostream>
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
////



bool check(int n)
{
    int ara[10]={0};
    while(n!=0)
    {
       ara[n%10]++;
        n/=10;
    }
    for(int i=0;i<=9;i++)if(ara[i]>1)return false;
    return true;
}

int main()
{
    bool st[5001];
    for(int i=1;i<5001;i++)st[i]=check(i);
    int n,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        int sum=0;
        for(int i=n;i<=m;i++)if(st[i])sum++;
        printf("%d\n",sum);
    }
    return 0;
}
