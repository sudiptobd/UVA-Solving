#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(n<=100)
            printf("f91(%d) = 91\n",n);
        else
            printf("f91(%d) = %d\n",n,n-10);
    }

    return 0;
}
