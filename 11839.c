#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j=0,k,an[5];
    char al[5]={'A','B','C','D','E'};

    while(scanf("%d",&t),t!=0)
    {
        while(t--)
        {
            for(i=0;i<5;i++)
            {
                scanf("%d",&an[i]);
                if(an[i]<=127)j++,k=i;
            }

            if(j==1)printf("%c\n",al[k]);
                else printf("*\n");
            j=0;
        }

    }

    return 0;
}
