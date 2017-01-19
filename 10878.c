#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    //freopen("in.txt","r",stdin);
    char ara[100];
    gets(ara);
    while(1)
    {
        gets(ara);
        if(!strcmp(ara,"___________"))break;
        int i,pw=0,ch=0;
        for(i=strlen(ara)-1;i>=0;i--)
        {
            if(ara[i]==' ')pw++;
            else if(ara[i]=='o')ch+=(int)pow(2,pw++);
        }
        printf("%c",ch);
    }
    return 0;
}
