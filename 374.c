#include <stdio.h>
#include <math.h>
int main()
{
    int b,p,m,result;
    while(scanf("%d", &b) == 1)
    {
        result = 1;
        scanf("%d %d" ,&p,&m);
        while(p > 0)
        {
            if(p%2 == 1)
            {
                result = (result * b) % m;
            }
            p = p >> 1;
            b = ((b % m )* (b % m)) %m;
        }
        printf("%d\n", result);
    }

    return 0;
}
