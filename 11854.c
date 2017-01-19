#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    while (scanf("%d %d %d", &a,&b,&c),(a,b,c)>0)
    {
        if(c>b && c>a)
        {
            if(a*a + b*b == c*c) printf("right\n");
            else printf("wrong\n");
        }
        if(a>b && a>c)
        {
            if(c*c + b*b == a*a) printf("right\n");
            else printf("wrong\n");
        }
        if(b>c && b>a)
        {
            if(a*a +  c*c == b*b) printf("right\n");
            else printf("wrong\n");
        }
    }
    return 0;
}
