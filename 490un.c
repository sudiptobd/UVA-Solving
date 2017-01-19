#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char a[100][101];
    int i,j;

    for(i=0;i<100;i++){for(j=0;j<100;j++)a[i][j]=' ';a[i][100]=NULL;}

    int s,jmax=0;
    i=0;
    while(gets(a[i]))
    {
        s=strlen(a[i]);
        if(s>jmax)jmax=s;
        i++;
    }

    int imax;
    imax=i-1;

    for(j=0;j<jmax;j++)
    {
        for(i=imax;i>=0;i--)printf("%c",a[i][j]);
        printf("\n");
    }


    return 0;
}
