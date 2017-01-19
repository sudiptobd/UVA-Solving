#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        int i=1,incr=2,step=0;
        while(n>(i+step))
        {
            i+=incr;
            incr+=2;
            step++;
        }

        int x=++step;
        int y=x;

        if(x%2==0)
        {
            if(n>i)y-=(n-i);
            else x-=(i-n);
        }
        else
        {
            if(n>i)x-=(n-i);
            else y-=(i-n);
        }
        printf("%d %d\n",x,y);

    }
    return 0;
}
