#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,s,d,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&s,&d);
        x=(s+d)/2;
        y=s-(s+d)/2;
        if(s==0 || d==0)printf("0 0\n");
        else if(s<=d)printf("impossible\n");
        else if (s!=x+y || d!=x-y) printf("impossible\n");

        else printf("%d %d\n",x,y);

    }
    return 0;
}
