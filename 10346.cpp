#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;


int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)==2 && k>1)
    {
       int x=n;
        while(n>=k)
        {
            x+=(n/k);
            n=(n/k)+(n%k);
        }
        printf("%d\n",x);
    }
    return 0;
}

