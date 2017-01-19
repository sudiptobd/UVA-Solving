#include <stdio.h>
#include <stdlib.h>

int GCD( int i, int j)
{
    int k;
    while(i!=0)
    {
        k=i;
        i=j%i;
        j=k;
    }
    return k;
    }
int main()
{
    int i,j,N;
    int G;
    while(scanf("%d",&N),N!=0)
        {
            G=0;
            for(i=1;i<N;i++)
            for(j=i+1;j<=N;j++)
            G+=GCD(i,j);
        printf("%d\n",G);
    }
    return 0;

}
