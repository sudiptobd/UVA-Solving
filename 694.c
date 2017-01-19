#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int a,b,n,count=1,tcase=0;
    while(scanf("%lld%lld",&a,&b),a>=0,b>=0)
    {
        tcase++;
        n=a;
        while(n!=1)
        {
                 if(n%2==0){n=n/2;count++;}
            else if(n%2!=0){
                               n=n*3+1;
                               if(n>b) break;
                               count++;
                           }
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",tcase,a,b,count);
        count=1;
    }
    return 0;
}
