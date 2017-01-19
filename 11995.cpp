#include<bits/stdc++.h>

using namespace std;
#define inf 999999
#define MAX 100
#define gcd(a,b) __gcd(a,b)
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


    int t;
    while(scanf("%d",&t)==1)
    {
        bool st=true,q=true,pq=true;
        stack<int>S;
        queue<int>Q;
        priority_queue<int>P;

        while(t--)
        {
            int op=Int; int ele=Int;
            if(op==1)
            {
                if(st)S.push(ele);
                if(q)Q.push(ele);
                if(pq)P.push(ele);
            }
            else
            {
                if(st)
                {
                    if(S.empty())st=false;
                    else if(S.top()!=ele)st=false;
                    else S.pop();
                }

                if(q)
                {
                    if(Q.empty())q=false;
                    else if(Q.front()!=ele)q=false;
                    else Q.pop();
                }
                if(pq)
                {
                    if(P.empty())pq=false;
                    else if(P.top()!=ele)pq=false;
                    else P.pop();
                }
            }

        }
        if(st+q+pq>1)printf("not sure\n");
        else if(st+q+pq==0)printf("impossible\n");
        else if(st+q+pq==1)
        {
            if(st)printf("stack\n");
            else if(q)printf("queue\n");
            else printf("priority queue\n");
        }

    }



    return 0;
}



