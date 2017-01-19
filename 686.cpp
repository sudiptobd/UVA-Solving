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


#define max 33000

bool prime[max]= {false};
void generate()
{
    for(int i=2; i<max; i++)
        if(!prime[i])
            for(int j=i+i; j<max; j+=i)
                prime[j]=true;
}

int main()
{
    //freopen("in.txt","r",stdin);
    generate();
    int n;
    while(scanf("%d",&n)&&n)
    {
        int visit[33000]={0};
        int count=0;
        for(int i=2; i<n; i++)
        {
            if(prime[i])continue;
            for(int j=i; j<n; j++)
            {
                if((!prime[i]&&!prime[j])&&(i+j==n)&&(!visit[i]&&!visit[j]))
                {
                    count++;
                    visit[i]=visit[j]=1;
                }
            }
        }
        printf("%d\n",count);

    }

    return 0;

}
