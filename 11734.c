#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n); getchar();
    int i; char ara[21],para[21];
    for(i=1;i<=n;i++)
    {
        gets(ara); gets(para);
        if(strcmp(ara,para)==0) { printf("Case %d: Yes\n",i); continue;}
        int al=strlen(ara),pl=strlen(para),suma=0,sump=0,j;
        for(j=0;j<al;j++)if(ara[j]!=' ')suma+=ara[j];
        for(j=0;j<pl;j++)if(para[j]!=' ')sump+=para[j];

        if(sump==suma)printf("Case %d: Output Format Error\n",i);
        else printf("Case %d: Wrong Answer\n",i);
    }
    return 0;
}
