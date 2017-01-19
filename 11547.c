#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,a,b;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%d", &a);
        b=(((((((a*567)/9)+7492)*235)/47)-498)%100)/10;
        if(b<0) b=b*-1;
        printf("%d\n",b);
    }
    return 0;
}
