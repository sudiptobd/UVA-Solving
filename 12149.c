#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    while(scanf("%d",&n),n!=0)
    {

        for(i=1;i<=n;i++)
        {
            sum=sum+i*i;
        }
        printf("%d\n",sum);
        sum=0;
    }


    return 0;
}
