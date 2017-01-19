#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    int i,a,b;
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a, &b);
        if(a%2==0) a=a+1;
        int j=a,c=0;
        while(j<=b)
        {
            c=c+j;
            j=j+2;
        }
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
