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

    int n;
    while(n=Int)
    {
        getchar();

        map<string,int>m;
        vector<string>v;
        int mx=0;
        while(n--)
        {
            string a[5];
            rep(i,5)cin>>a[i];
            sort(a,a+5);
            string x;
            rep(i,5)x+=a[i];
            m[x]++;
            //cout<<x<<endl;
            if(mx<m[x])
            {
                mx=m[x];
                v.clear();
                //PD(v.size());
                v.push_back(x);
            }
            else if(mx==m[x])v.push_back(x);
        }

        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            ans+=m[v[i]];
            //cout<<v[i]<<endl;
        }
        PD(ans);


    }
    return 0;
}



