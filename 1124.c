#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    while(scanf("%c",&c)==1)
    {
        printf("%c",c);
        if(c=='\r')printf("\n");
    }

    return 0;
}
