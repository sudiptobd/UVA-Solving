#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i; int a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
             if(a+b<=c){ printf("Wrong!!\n"); continue; }
        else if(b+c<=a){ printf("Wrong!!\n"); continue; }
        else if(c+a<=b){ printf("Wrong!!\n"); continue; }
        printf("OK\n");
    }

    return 0;
}
