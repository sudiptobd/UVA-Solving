#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,a,f,j,k,l;
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&f);
        for(j=1;j<=f;j++)
        {
            for(k=1;k<=a;k++)
            {
                for(l=1;l<=k;l++)printf("%d",k);
                printf("\n");
            }

            for(k=a-1;k>=1;k--)
            {
                for(l=1;l<=k;l++)printf("%d",k);
                printf("\n");
            }
            if(i==n && j==f)break;
             printf("\n");

        }


    }
    return 0;
}
