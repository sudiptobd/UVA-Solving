#include<bits/stdc++.h>

using namespace std;
#define inf 999999
#define MAX 100
#define gcd(a,b) __gcd(a,b)
#define lli long long int
int getInt(){int x;scanf("%d",&x);return x;}
long long getLongLong(){long long x;scanf("%I64d",&x);return x;}
double getDouble(){double x;scanf("%lf",&x);return x;}
char getChar(){char x;scanf("%c",&x);return x;}
#define Int getInt()
#define Char getChar()
#define Long getLongLong()
#define Double getDouble()
#define rep(i,n) for(int i=0;i<n;i++)
#define PD(n) printf("%d\n",n);


int mod(int n,int m)
{
    if(n<0)
        n+=(ceil(-n*1.00/m)*m);
    return n%m;
}
////////////////////////////////////

int main()
{

  // freopen("out.txt","w",stdout);
   //freopen("in.txt","r",stdin);
    int t=Int;
    while(t--)
    {
        int n=Int;

        map<int,int>index;
        int start=1,mx=0,i;

        for( i=1;i<=n;i++)
        {
            int snow=Int;
            if(index[snow]<start)index[snow]=i;
            else
            {
                mx=max(mx,i-start);
                start=index[snow]+1;
                index[snow]=i;
            }

        }
        mx=max(mx,i-start);
        PD(mx);
    }

    return 0;
}



