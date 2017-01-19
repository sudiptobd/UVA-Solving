#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    int s=t;
    getchar();
    for(i=1;i<=s;i++)
    {
        char ara[19];
        gets(ara);
        int j,k=16,sum1=0,sum2=0;

        for(j=18;j>=0;j--)
        {
            if(ara[j]==' ') continue;
            if(k%2==0) sum1+=(ara[j]-'0');
                else
                {
                    int a=(ara[j]-'0')*2;
                    if(a>=10) a=(a%10)+1;
                    sum2+=a;
                }
            k--;
        }
        int sum=sum1+sum2;
        if(sum%10==0)printf("Valid\n");
        else printf("Invalid\n");
    }

    return 0;
}
