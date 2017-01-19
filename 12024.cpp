#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
long long int dear[13]={1,0,2,4,9,44,265,1854,14833,133496,1334961,14684570,176214841};

long long int fact(long long int n)
{
    long long int sum=1;
    for(long long int i=1;i<=n;i++)sum*=i;
    return sum;
}

int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        for(int i=1;i<=t;i++)
            {
                long long int n;
                scanf("%d",&n);
                if(n==2)
                {
                    printf("1/2\n");
                    continue;
                }
                else if(n==3)
                {
                    printf("2/6\n");
                    continue;
                }

                printf("%lld/%lld\n",dear[n],fact(n));

            }
    }
    return 0;
}

