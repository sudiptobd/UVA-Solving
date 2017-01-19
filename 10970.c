#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        printf("%d\n",(m*n)-1);
    }
    return 0;
}
