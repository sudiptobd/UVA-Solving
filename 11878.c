#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,count=0;
    char sn,s[5];
    while(scanf("%d%c%d=%s",&a,&sn,&b,s)==4)
    {
        if(s[0]=='?') continue;
        else c=atoi(s);

             if(sn=='+' && c==a+b) count++;
        else if(sn=='-' && c==a-b)  count++;
    }
    printf("%d\n",count);
    return 0;
}
