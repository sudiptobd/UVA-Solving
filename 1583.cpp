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

vector<int >v[100001];
void gen()
{
    for(int i=1;i<100050;i++)
    {
        int n=i;
        int sum=n;
        while(n)
        {
            sum+=n%10;
            n/=10;
        }
        //printf("hell");
        if(sum<=100000)v[sum].push_back(i);
    }
}

int main()
{
//freopen("in.txt","r",stdin);
gen();
int t=sc();
while(t--)
{
    int n=sc();
    if(!v[n].size())printf("0\n");
    else
    {
        //sort(v[n].begin(),v[n].end());
        //for(int i=0;i<v[n].size();i++)printf("%d ",v[n][i]);
        printf("%d\n",v[n][0]);
    }
}

return 0;

}
