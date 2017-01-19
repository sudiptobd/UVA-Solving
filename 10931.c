#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int n,s,t[1000],i,j,count;
    while(scanf("%lld",&n),n>0)
    {
        s=n;
        if(n==1) {printf("The parity of 1 is 1 (mod 2).\n"); continue;}
        i=0;

        while(1)
        {
            t[i]=n%2;
            n=n/2;
            if(n<2){ i++; t[i]=n;  break;}
            i++;
        }
        count=0;


        for(j=i;j>=0;j--)
        {
            if(t[j]==1)count++;

        }

        printf("The parity of ");
        for(j=i;j>=0;j--)
        {
            printf("%lld",t[j]);

        }
        printf(" is %lld (mod 2).\n",count);
    }
    return 0;
}
