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
#define EPS 1e-9

int main()
{
//freopen("in.txt","r",stdin);

    int t;
    scanf("%d",&t);
    while(t--)
    {
        double  x0,y0,x1,y1,cx,cy,r;
        scanf("%lf %lf %lf %lf %lf %lf %lf",&x0,&y0,&x1,&y1,&cx,&cy,&r);
        double len=x1-x0;
        double wid=y1-y0;
        double c1=x0+len*9.0/20.0;
        double c2=y0+wid/2.0;
        bool flag=false;
        if(c1==cx&&c2==cy)
            if(fabs(len/wid-10.0/6.0)<EPS)
                if(fabs(len/r-5.0)<EPS)flag=true;
        if(flag)printf("YES\n");
        else printf("NO\n");

    }


    return 0;

}
