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
#define PD(x) printf("%d\n",x);
////////////////////////////////////


int main()
{
    int t=Int;
    int cases=1;
    while(t--)
    {
        int n=Int;
        int a[n],b[n],lis[n],lds[n];
        int mlis=0,mlds=0;

        rep(i,n)a[i]=Int;
        rep(i,n)b[i]=Int;

        rep(i,n)
        {
            lis[i]=lds[i]=b[i];
            rep(j,i)
            {
                if(a[i]>a[j])lis[i]=max(lis[i],lis[j]+b[i]);
                else if(a[i]<a[j])lds[i]=max(lds[i],lds[j]+b[i]);
            }
            mlis=max(mlis,lis[i]);
            mlds=max(mlds,lds[i]);

        }


        if(mlis>=mlds)P("Case %d. Increasing (%d). Decreasing (%d).\n",cases++,mlis,mlds);
        else P("Case %d. Decreasing (%d). Increasing (%d).\n",cases++,mlds,mlis);
    }


    return 0;
}




















