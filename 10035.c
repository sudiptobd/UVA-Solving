#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0) break;
        int sa,sb,count=0,carry=0;

        while(1)
        {
            sa=a%10; sb=b%10;
            if((sa+sb+carry)>=10) { count++; carry=1; }
            else carry=0;
            a=a/10; b=b/10;
            if(a==0 && b==0)break;
        }

        if(count==0)printf("No carry operation.\n");
        else if(count==1) printf("%d carry operation.\n",count);
        else printf("%d carry operations.\n",count);
    }
    return 0;
}
