#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int n,t[1000],i,j;
    while(scanf("%lld",&n),n>-1)
    {
        if(n==0) {printf("0\n"); continue;}
        if(n==1) {printf("1\n"); continue;}
        if(n==2) {printf("2\n"); continue;}
        i=0;

        while(1)
        {
            t[i]=n%3;
            n=n/3;
            if(n<3){ i++; t[i]=n;  break;}
            i++;
        }

        for(j=i;j>=0;j--)
        {

            printf("%lld",t[j]);
        }
        printf("\n");
    }
    return 0;
}
