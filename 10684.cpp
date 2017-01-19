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
#define REP(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define P printf
////////////////////////////////////

int main()
{

    int n;
    while(n=Int)
    {
        int ans=0;
        int sum=0;
        REP(i,n)
        {
            sum+=Int;
            if(i==0)ans=sum;

            ans=max(sum,ans);
            if(sum<0)sum=0;
        }

        if(ans<=0)printf("Losing streak.\n",ans);
            else printf("The maximum winning streak is %d.\n",ans);
    }
    return 0;
}













