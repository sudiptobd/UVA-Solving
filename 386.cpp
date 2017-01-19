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

int main()
{
//freopen("in.txt","r",stdin);
    for(int x=2;x<=200;x++)
        for(int i=2;i<=200;i++)
            for(int j=i;j<=200;j++)
                for(int k=j;k<=200;k++)
                if(x*x*x==i*i*i+j*j*j+k*k*k)printf("Cube = %d, Triple = (%d,%d,%d)\n",x,i,j,k);


return 0;

}
