#include<stdio.h>
#include<iostream>
#include<utility>
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
using namespace std;
#define lli long long int
#define gcd(a,b) __gcd(a,b)

int sc()
{
    int n;
    scanf("%d",&n);
    return n;

}
//map<vector<int> ,bool>pre;

int check(int ara[],int n)
{
    bool flag=false;
    for(int i=0;i<n;i++)
        if(ara[i])
        {
            flag=false;
            break;
        }
        else flag=true;
    if(flag)return 0;
    //if(pre[v])return 1;
    return 2;


}


int main()
{
//freopen("in.txt","r",stdin);
    int t=sc();
    while(t--)
    {
        int n=sc();
        int ara[n];
        for(int i=0;i<n;i++)ara[i]=sc();
        int ck;
        //vector<int>x;
        //for(int j=0;j<n;j++)x.push_back(ara[j]);

        //pre[x]=true;
        int count =0;
        do
        {

            int temp=ara[0];
            for( int i=0;i<n-1;i++)ara[i]=abs(ara[i]-ara[i+1]);
            ara[n-1]=abs(ara[n-1]-temp);

            //vector<int>v;
           // for(int j=0;j<n;j++)v.push_back(ara[j]);
            ck=check(ara,n);
            //pre[v]=true;

             //for( int i=0;i<n;i++)printf("%d\n",ara[i]);
        count++;
        if(count>1000)
        {
            ck=1;
            break;
        }
        }while(ck==2);

        if(!ck)printf("ZERO\n");
        else printf("LOOP\n");
       // printf("%d\n",count);

    }

    return 0;

}
