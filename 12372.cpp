#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <math.h>

using namespace std;


int main()
{
    int a,b,c,n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            if(a<=20 && b<=20 && c<=20)printf("Case %d: good\n",i);
            else printf("Case %d: bad\n",i);
        }
    }
    return 0;
}

