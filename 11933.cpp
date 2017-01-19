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

   //freopen("out.txt","w",stdout);

   int n=1;
   while(n=Int)
   {
       int a=0,b=0;
       int ck=1,j=0;
       int next=1;
       while(n)
       {
            if(n&1)
            {
                if(next)
                {
                    a|=(1<<j);
                    next=0;
                }
                else
                {
                    b|=(1<<j);
                    next=1;
                }
            }
            j++;
            n=n>>1;
       }
       printf("%d %d\n",a,b);
   }

    return 0;
}



