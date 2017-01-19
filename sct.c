#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,l=0,j;
    char s[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if(!strcmp(s,"1")||!strcmp(s,"4")||!strcmp(s,"78"))
            printf("+\n");
        else
        {
            if(s[l-1]=='5'&&s[l-2]=='3') printf("-\n");
            else if(s[l-1]=='4'&&s[0]=='9')printf("*\n");
            else printf("?\n");
        }
        l=0;
    }
    return 0;
}

