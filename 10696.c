#include <stdio.h>
#include <stdlib.h>

int n,k;
int f91(int);

int main()
{
    while(scanf("%d", &n),n!=0)
    {
        k=f91(n);
        printf("f91(%d) = %d\n",n,k);
    }

    return 0;
}
int f91(int n)
{
    if(n<=100) return  f91(f91(n+11));
    else return n-10;
}
