#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,x,y,z,r;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&r);
        x=(45*r)/20;
        y=(30*r)/20;
        z=(55*r)/20;
        printf("Case %d:\n-%d %d\n%d %d\n%d -%d\n-%d -%d\n",i,x,y,z,y,z,y,x,y);

    }
    return 0;
}
