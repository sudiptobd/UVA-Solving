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
int a[6];
int b[6];
while(scanf("%d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5])==5)
{
    scanf("%d %d %d %d %d",&b[1],&b[2],&b[3],&b[4],&b[5]);
    bool flag=false;
    for(int i=1;i<=5;i++)
    {
        if(a[i]==b[i])
        {
            flag=true;
            break;
        }
    }
    if(flag)printf("N\n");
    else printf("Y\n");
}

return 0;

}
