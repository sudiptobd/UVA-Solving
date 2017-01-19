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
        int n=sc();
        int pre=-1;
        vector<int>v;
        while(n>=10&&n!=pre)
        {
            pre=n;
            for(int i=9;i>=2;i--)
                if(n%i==0)
                {
                    v.push_back(i);
                    n/=i;
                    break;
                }
        }
        v.push_back(n);
        if(pre==n)printf("-1\n");
        else
        {
            for(int i=v.size()-1;i>=0;i--)printf("%d",v[i]);
            printf("\n");

        }
    }


return 0;

}
