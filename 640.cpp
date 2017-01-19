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

bool self[1000005]={false};

int d(int n)
{
    int sum=n;
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}


int main()
{
//freopen("in.txt","w",stdout);



    for(int i=1; i<=1000000; i++)
    {
            int j=d(i);
            if(j<=1000000)self[j]=true;

    }
    for(int i=1; i<=1000000; i++)
        if(!self[i])printf("%d\n",i);


    return 0;

}
