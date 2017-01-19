#include<bits/stdc++.h>
using namespace std;
#define inf 999999
#define MAX 10000
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/gcd(a,b)
#define lli long long int
int getInt()
{
    int x;
    scanf("%d",&x);
    return x;
}
long long getLongLong()
{
    long long x;
    scanf("%I64d",&x);
    return x;
}
double getDouble()
{
    double x;
    scanf("%lf",&x);
    return x;
}
char getChar()
{
    char x;
    scanf("%c",&x);
    return x;
}
template<typename t>
t abs(t a)
{
    if(a>=0)
        return a;
    return -a;
}
#define Int getInt()
#define Char getChar()
#define Long getLongLong()
#define Double getDouble()
#define loopi for(int i=0;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define P printf
////////////////////////////////////

int main()
{

    int n;
    while(scanf("%d",&n)==1)
    {
        int ara[n][n];
        rep(i,n)
            rep(j,n)
            {
              ara[i][j]=Int;
              if(i>0)ara[i][j]+=ara[i-1][j];
              if(j>0)ara[i][j]+=ara[i][j-1];
              if(i>0&&j>0)ara[i][j]-=ara[i-1][j-1];

            }

        int mx=-127*100*100;
        rep(i,n)
            rep(j,n)
                for(int k=i;k<n;k++)
                    for(int l=j;l<n;l++)
                {
                    int sub=ara[k][l];
                    if(i>0)sub-=ara[i-1][l];
                    if(j>0)sub-=ara[k][j-1];
                    if(i>0&&j>0)sub+=ara[i-1][j-1];
                    mx=max(sub,mx);
                }

                printf("%d\n",mx);


    }
    return 0;
}

