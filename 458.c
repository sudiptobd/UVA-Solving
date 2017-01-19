#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    while (scanf("%c", &ch)==1)
        if (ch == '\n') printf("\n");
        else printf("%c",ch-7);
    return 0;
}
