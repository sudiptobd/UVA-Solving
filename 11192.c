#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,l,i,r,j,count,scount;
    char str[110];
    while(scanf("%d",&a),a!=0)
    {
        scanf("%s",str);
        l=strlen(str);
        r=l/a;

        for(i=0; i<=l-r; i=i+r)
            for(j=i+r-1; j>=i; j--)
                printf("%c",str[j]);

        printf("\n");

    }
    return 0;
}
