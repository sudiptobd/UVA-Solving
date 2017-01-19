#include <stdio.h>
#include <stdlib.h>

void define(int n,int m,int x,int y)
{
    if(x==n||y==m)printf("divisa\n");
    else if(x>=n&&y>=m)printf("NE\n");
    else if(x<=n&&y>=m)printf("NO\n");
    else if(x<=n&&y<=m)printf("SO\n");
    else printf("SE\n");
}

int main()
{
    int k;
    while(scanf("%d",&k)&&k)
    {
        int n,m;
        scanf("%d %d",&n,&m);

        int i;
        for(i=1;i<=k;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            define(n,m,x,y);
        }
    }

    return 0;
}
