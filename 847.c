#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int st=1,p=1;
        if(n==1){printf("Stan wins.\n");continue;}
        while(p<n)
        {
            if(st)
            {
                p*=9;
                st=0;
            }
           else
            {
                p*=2;
                st=1;
            }
        }
        if(!st)printf("Stan wins.\n");
        else printf("Ollie wins.\n");
    }
    return 0;
}
