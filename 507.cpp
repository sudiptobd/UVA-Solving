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

    int t=Int;
    REP(i,t)
    {
        int n=Int;
        int lo,hi,a=1,b=1,ans=0,sum=-1, counter=1;
        int ara[n];
        REP(j,n-1)
        {
            if(sum>=0)sum+=Int;
            else
            {
                sum=Int;
                a=j+1;
            }
            if((ans<sum)||((ans==sum)&&(j+2-a)>(hi-lo)))
            {
                lo=a;
                hi=j+2;
                ans=sum;
            }
        }
        if(ans==0)P("Route %d has no nice parts\n",i+1);
        else P("The nicest part of route %d is between stops %d and %d\n",i+1,lo,hi);
    }
    return 0;
}

