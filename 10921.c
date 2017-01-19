#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ara[35];
    int l,i;
    while(gets(ara))
    {
        l=strlen(ara);
        for(i=0;i<l;i++)
        {

            if(ara[i]=='A'||ara[i]=='B'||ara[i]=='C')printf("2");
            else if(ara[i]=='D'||ara[i]=='E'||ara[i]=='F')printf("3");
            else if(ara[i]=='G'||ara[i]=='H'||ara[i]=='I')printf("4");
            else if(ara[i]=='J'||ara[i]=='K'||ara[i]=='L')printf("5");
            else if(ara[i]=='M'||ara[i]=='N'||ara[i]=='O')printf("6");
            else if(ara[i]=='P'||ara[i]=='Q'||ara[i]=='R'||ara[i]=='S')printf("7");
            else if(ara[i]=='T'||ara[i]=='U'||ara[i]=='V')printf("8");
            else if(ara[i]=='W'||ara[i]=='X'||ara[i]=='Y'||ara[i]=='Z')printf("9");
            else printf("%c",ara[i]);
        }
        printf("\n");
    }
    return 0;
}
