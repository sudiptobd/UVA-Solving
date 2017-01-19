#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        int pcount[25]={0},i;
        for(i=2;i<=n;i++)//counting prime fator for every individual fact .
        {
            int num=i,j=0;
            while(num>1)
            {
                int count=0;
                while(num%prime[j]==0)
                {
                    num/=prime[j];
                    count++;
                }
                pcount[j]+=count;
                j++;
            }
        }


        printf("%3d! =",n);
        int flag=1;
        for(i=0;i<25;i++)
        {
            if(pcount[i]!=0)
            {
                if(flag==16)printf("\n%6c",' ');
                flag++;
                printf("%3d",pcount[i]);
            }
        }
        printf("\n");


    }
    return 0;
}
