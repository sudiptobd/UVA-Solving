#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i,j,a,net=0;
    char acc[10];
    for(i=1;i<=t;i++)
    {
        scanf("%s",acc);
        if(!strcmp(acc,"donate"))
        {
            scanf("%d",&a);
            net=net+a;
        }
        else printf("%d\n",net);
    }
    return 0;
}
