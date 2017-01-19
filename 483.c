#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ara[1000];
    int l,i,j;
    int stop;
    while(gets(ara))
    {
        stop=0;
        l=strlen(ara);
        for(i=0;i<l;i++)
        {
            if(ara[i]==' ')
            {
                for(j=i-1;j>=stop;j--)printf("%c",ara[j]);
                printf(" ");
                stop=i+1;
            }

            if(i==l-1)
            {
                for(j=i;j>=stop;j--)
                    printf("%c",ara[j]);
                printf("\n");
            }


        }
    }
    return 0;
}
