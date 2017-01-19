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
#define D double
#define gcd(a,b) __gcd(a,b)
#define EPS 1e-9

int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}

D scd()
{
    D n;
    scanf("%lf",&n);
    return n;
}



int main()
{
//freopen("in.txt","r",stdin);

       D b,s;
        int t=1;
       while((b=scd())&&(s=scd()))
       {
            D befo=s/b;
            if(befo>1)befo=1;
            if(b-1==0)
            {
                printf("Case %d: :-\\\n",t++);
                continue;
            }
            D aftr=(s-1)/(b-1);
            if(aftr>1)aftr=1;

            if(aftr>befo)printf("Case %d: :-)\n",t++);
            else if(aftr<befo)printf("Case %d: :-(\n",t++);
            else printf("Case %d: :-|\n",t++);

       }



    return 0;

}
