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

    int m,n;
    while(scanf("%d %d",&m,&n)==2)
    {
        int count=0;
        //printf(" %d %d\n",m,n);
        while(m--)
        {
            int x=n;
            bool goal=true;
            while(x--)if(!sc())goal=false;
            if(goal)count++;
        }
        printf("%d\n",count);
    }


    return 0;

}
