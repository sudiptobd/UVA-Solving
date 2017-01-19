#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        getchar();
        int i;
        for(i=1;i<=n;i++){
        char str[500];
        gets(str);
        if(!strcmp(str,"1")||!strcmp(str,"4")||!strcmp(str,"78"))printf("+\n");
        else if(str[strlen(str)-1]=='5'&&str[strlen(str)-2]=='3')printf("-\n");
        else if(str[0]=='9'&&str[strlen(str)-1]=='4')printf("*\n");
        else printf("?\n");
        }
    }
    return 0;
}
