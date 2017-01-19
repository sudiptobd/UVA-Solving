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
#define EPS 1e-7


int main()
{
//freopen("in.txt","r",stdin);


    double n;
    int t=1;
    while(scanf("%lf",&n)&&n)
    {
        printf("Case %d: %.0lf\n",t++,ceil((3+sqrt(9+8*n))/2));
    }

    return 0;

}












