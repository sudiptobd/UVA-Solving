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
#include<iostream>
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
    scanf("%lld",&x);
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
#define EPS 1e-9
////////////////////////////////////


vector<int>sr,qu;
map< int , int >fc;


bool can(double f)
{
    int leak=0;
    int last=0;
    int fcp=0;
    double gas=f;
    for(int i=0;i<sr.size();i++)
    {
        int dis=sr[i]-last;
        f=f-(dis*(leak+(fcp/100.0)));
        if(f<0)return false;
        if(qu[i]=='F')fcp=fc[sr[i]];
        else if(qu[i]=='M')leak=0;
        else if(qu[i]=='G'&&f>=0)f=gas;
        else if(qu[i]=='L')leak++;
        last=sr[i];
    }
    return true;
}



int main()
{
//freopen("in.txt","r",stdin);
   char ara[100];
   while(gets(ara))
   {
       int n,val;
       char a[20],b[20];
       int x=sscanf(ara,"%d %s %s %d",&n,a,b,&val);
       if(x==4&&!n&&!val)return 0;
       if(x==4)
       {
           sr.push_back(n);
           qu.push_back(a[0]);
           fc[n]=val;

       }
       else
       {
           sr.push_back(n);
           qu.push_back(a[0]);
       }

       if(a[0]=='G'&&x==2)
       {
           double lo=0.0,hi=10000.0,mid=0.0,ans=0.0;
           while(fabs(hi-lo)>EPS)
           {
               mid=(lo+hi)/2.0;
               if(can(mid))
               {
                   ans=mid; hi=mid;
                   //printf("%lf\n",ans);
               }
               else lo=mid;
           }
           printf("%.3lf\n",(hi+lo)/2);
           sr.clear();
            qu.clear();
            fc.clear();
       }


   }

    return 0;

}




