#include <stdio.h>
#include <stdlib.h>

long long int fib[51];
void generate()
{
    fib[0]=1;
    fib[1]=2;
    int i;
    for(i=2;i<=51;i++)fib[i]=fib[i-1]+fib[i-2];
}

int main()
{
    generate();
    int n;
    scanf("%d",&n);
    int item;
    int i=1;
    while(n--)
    {
        scanf("%d",&item);
        printf("Scenario #%d:\n%lld\n\n",i,fib[item]);
        i++;
    }

    return 0;
}
