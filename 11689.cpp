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

int main()
{
//freopen("in.txt","r",stdin);
    int t=sc();
    while(t--)
    {
        int e=sc(),f=sc(),c=sc();
        int n=e+f;
        int sum=0;
        while(n>=c)
        {
            //printf("%d\n",n);
            int a=n/c;
            int b=n%c;
            sum+=a;
            n=a+b;
        }
        printf("%d\n",sum);
    }

    return 0;

}
