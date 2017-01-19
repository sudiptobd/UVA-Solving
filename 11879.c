#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[1000];

int mod17(int len)
{
    int mod=0,i;
    for(i=0;i<len;i++)mod=((mod*10+(a[i]-'0'))%17);
    return mod;
}

int main()
{
    while(1)
    {
        gets(a);
        int len=strlen(a);
        if(len==1&&a[0]=='0')break;
        if(mod17(len)==0)printf("1\n");
        else printf("0\n");
    }
    return 0;
}
