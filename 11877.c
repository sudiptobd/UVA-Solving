#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n),n!=0)
    {
        int count=0;
        while(n>=3)
        {
            count+=(n/3);
            n=(n/3)+(n%3);

        }
        if(n==2)count++;
        printf("%d\n",count);

    }
    return 0;
}

