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

#define max 1000005

bool prime[max]= {false};
void gene()
{
    for(int i=2; i<max; i++)
        if(!prime[i])
            for(int j=i+i; j<max; j+=i)
                prime[j]=true;
}

bool palin(int n)
{
    int a=n,b=0;
    while(a)
    {
        b=b*10+a%10;
        a=a/10;
    }
    //cout<<b<<" "<< n<<endl;
    if(n==b)return true;
    else return false;

}

int main()
{
    gene();
//freopen("in.txt","r",stdin);
    int n;
    while(scanf("%d",&n)==1)
    {
            printf("%d\n",2*n);
            if(palin(n)&&!prime[n])break;
    }


    return 0;

}
