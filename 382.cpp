#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    printf("PERFECTION OUTPUT\n");
    int n;
    while(scanf("%d",&n)&&n)
    {
        int root=n/2;
        int sum=0;
        for(int i=1;i<=root;i++)if(n%i==0)sum+=i;

             if(sum==n)printf("%5d  PERFECT\n",n);
        else if(sum>n)printf("%5d  ABUNDANT\n",n);
        else printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
