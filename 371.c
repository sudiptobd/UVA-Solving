#include <stdio.h>
#include <stdlib.h>

long long int ac(long long int n)
{
    long long int count=1;
    if(n%2==0)n/=2;
    else n=3*n+1;
    while(n!=1)
    {
        if(n%2==0)n/=2;
        else n=3*n+1;
        count++;
    }
    return count;

}

int main()
{
    long long int n1,n2,i;
    while(scanf("%lld %lld",&n1,&n2)==2)
    {
        if(n1==0&&n2==0)break;
        if(n1>n2)
        {
            long long int x=n2;
            n2=n1;
            n1=x;
        }
        long long int ntemp,vtemp=0,temp;
        for(i=n1; i<=n2; i++)
        {
            temp=ac(i);
            if(temp>vtemp)
            {
                vtemp=temp;
                ntemp=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",n1,n2,ntemp,vtemp);

    }
    return 0;
}
