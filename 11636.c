#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,x,c=0;
    while(scanf("%d",&a),a>-1)
    {
        c++;
        n=1; x=0;
        while(1)
        {

            if(n>=a)
            {
                printf("Case %d: %d\n",c,x);
                break;
            }
            else n=n*2;
            x++;
        }
    }


    return 0;
}
