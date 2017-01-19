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


double scd()
{
    double n;
    scanf("%lf",&n);
    return n;
}

int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}
int main()
{
//freopen("in.txt","r",stdin);

    int f,r;
    while(f=sc())
    {
        r=sc();

        double fr[f];
        for(int i=0; i<f; i++)fr[i]=scd();
        double rr[r];
        for(int i=0; i<r; i++)rr[i]=scd();

        double d[f*r];
        int x=0;
        for(int i=0; i<r; i++)
            for(int j=0; j<f; j++)
                d[x++]=rr[i]/fr[j];
        sort(d,d+(f*r));
        double maxi=0.0;
        for(int i=1;i<(f*r);i++)
            if(d[i-1]!=d[i])
                maxi=max(maxi,d[i]/d[i-1]);
        printf("%.2lf\n",maxi);



    }

    return 0;

}
