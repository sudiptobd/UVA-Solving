#include <stdio.h>
#include <stdlib.h>

GCD(int i,int j)
{
    int k,gcd=0;
    for(k=1;k<=i;k++)
    {
        if(i%k==0 && j%k==0)gcd=k;
    }
    return gcd;

}


int main()
{

    int N,G,i,j;
    while(scanf("%d",&N),N!=0)
    {
        G=0;

        for(i=1;i<N;i++)

        for(j=i+1;j<=N;j++)

        {
            G+=GCD(i,j);
        }
        printf("%d\n",G);
    }

    return 0;
}
