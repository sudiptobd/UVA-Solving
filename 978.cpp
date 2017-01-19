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
   lli lcm(lli a, lli b)
{
    lli temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}


int main()
{

   //freopen("out.txt","w",stdout);
   //freopen("in.txt","r",stdin);


    int t=Int;
    while(t--)
    {
        int bf=Int;
        int ga=Int;
        int ba=Int;

        priority_queue<int>g,b;

        rep(i,ga)g.push(Int);
        rep(i,ba)b.push(Int);

        while(!g.empty()&&!b.empty())
        {
            int gs=g.size();
            int bs=b.size();
            int len=min(bf,min(gs,bs));

            vector<int>gv,bv;
            rep(i,len)
            {
                int gtemp=g.top(); g.pop();
                int btemp=b.top(); b.pop();
                if(gtemp>btemp)gv.push_back(gtemp-btemp);
                else if (gtemp<btemp)bv.push_back(btemp-gtemp);
            }

            int glen=gv.size();
            int blen=bv.size();

            rep(i,glen)g.push(gv[i]);
            rep(i,blen)b.push(bv[i]);

            gv.clear();
            bv.clear();
        }


       //printf("%d %d\n",g.size(),b.size());

        if(g.empty()&&b.empty())printf("green and blue died\n");
        else if(b.empty())
        {
                printf("green wins\n");
                while(!g.empty())
                {
                    PD(g.top());
                    g.pop();
                }
        }
        else
        {
                printf("blue wins\n");
                while(!b.empty())
                {
                    PD(b.top());
                    b.pop();
                }
        }

        if(t)printf("\n");


    }


    return 0;
}



