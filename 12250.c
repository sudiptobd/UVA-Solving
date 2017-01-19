#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ara[20]; int i=0;
    while(1)
    {
        gets(ara);
            i++;
        if(strcmp(ara,"HELLO")==0)printf("Case %d: ENGLISH\n",i);

        if(strcmp(ara,"HOLA")==0)printf("Case %d: SPANISH\n",i);

        if(strcmp(ara,"HALLO")==0)printf("Case %d: GERMAN\n",i);

        if(strcmp(ara,"BONJOUR")==0)printf("Case %d: FRENCH\n",i);

        if(strcmp(ara,"CIAO")==0)printf("Case %d: ITALIAN\n",i);

        if(strcmp(ara,"ZDRAVSTVUJTE")==0)printf("Case %d: RUSSIAN\n",i);

        if(ara[0]=='#') break;
        if(strcmp(ara,"HELLO")!=0&&strcmp(ara,"HOLA")!=0&&
           strcmp(ara,"HALLO")!=0&&strcmp(ara,"BONJOUR")!=0&&
           strcmp(ara,"CIAO")!=0 &&strcmp(ara,"ZDRAVSTVUJTE")!=0
           )printf("Case %d: UNKNOWN\n",i);

    }
    return 0;
}
