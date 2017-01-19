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

    int n;
    int t=1;
    int sum=0;
    while((n=sc())>=0)
    {
        printf("Case %d:\n",t++);
        sum=n;
        //printf("%d\n",n);
        int a[12];
        for(int i=0;i<12;i++)a[i]=sc();
        int b[12];
        for(int i=0;i<12;i++)
        {
            b[i]=sc();
           // printf("%d %d\n",sum,b[i]);
            if(sum==0&&b[i]!=0)printf("No problem. :(\n");
            else if(b[i]>sum)printf("No problem. :(\n");
            else
            {

                printf("No problem! :D\n");
                sum=sum-b[i];
            }
            sum+=a[i];
        }
    }



return 0;

}
