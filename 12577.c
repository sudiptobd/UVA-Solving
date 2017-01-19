#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ara[7]; int a=0;

    while(gets(ara),ara[0]!='*')
    {
        a++;
        if(strcmp(ara,"Hajj")==0) printf("Case %d: Hajj-e-Akbar\n",a);
        else printf("Case %d: Hajj-e-Asghar\n",a);
    }

    return 0;
}
