#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t,i,j;

        scanf("%d",&t);

        char iara[610];

        for(i=1;i<=t;i++)
        {

            scanf("%s",iara);

            int M=0,A=0,R=0,G=0,I=0,T=0,N;

            for(j=0;j<strlen(iara);j++)
            {
                     if(iara[j]=='M')M++;
                else if(iara[j]=='A')A++;
                else if(iara[j]=='R')R++;
                else if(iara[j]=='G')G++;
                else if(iara[j]=='I')I++;
                else if(iara[j]=='T')T++;
            }

            A=A/3;   R=R/2;

            N=M;
            if(A<N)N=A;
            if(R<N)N=R;
            if(G<N)N=G;
            if(I<N)N=I;
            if(T<N)N=T;

            printf("%d\n",N);
        }


    return 0;
}
