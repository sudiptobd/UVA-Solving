#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char islo[n+n][105];
    int i;
    for(i=0;i<n+n;i++)
        gets(islo[i]);

    int q,j;
    char input[105];
    scanf("%d",&q);

    getchar();
    for(i=1;i<=q;i++)
    {
        gets(input);

        for(j=0;j<n+n;j=j+2)
            if(strcmp(input,islo[j])==0)
            {
                printf("%s\n",islo[j+1]);
                break;
            }

    }
    return 0;
}
