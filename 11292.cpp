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

    int n,m;
    while(scanf("%d %d",&n,&m)&&(n&&m))
    {
        int a[n];
        for(int i=0;i<n;i++)a[i]=sc();
        int b[m];
        for(int i=0;i<m;i++)b[i]=sc();
        sort(b,b+m);
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            if(a[i]<=b[j])
            {
                sum+=b[j];
                b[j]=-1;
                count++;
                break;
            }
        if(sum&&count==n)printf("%d\n",sum);
        else printf("Loowater is doomed!\n");

    }

return 0;

}
