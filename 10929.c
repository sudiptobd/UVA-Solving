#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ara[1000];
    while( gets(ara) )
    {

        int a;
        a=strlen(ara);
        if(ara[0]=='0' && a==1) break;
        int sum=0,i;
        for(i=0;i<a;i++)
        {
            if(i%2==0) sum=sum+(ara[i]-48);
            else sum=sum-(ara[i]-48);
        }
        if(sum%11==0)printf("%s is a multiple of 11.\n",ara);
        else printf("%s is not a multiple of 11.\n",ara);
    }
    return 0;
}
