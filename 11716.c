#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,i,j,k,len,s,pos,count,x;
    double sq;
    char ara[10002];


    while (scanf("%d ",&t)==1)
    {
        for(i=0; i<t; i++)
        {
            gets(ara);
            len=strlen(ara);
            sq=sqrt(len);
            s=(int)sq;
            if(s!=sq)printf("INVALID\n");
            else if(s==sq)
            {
                pos=0;
                count=0;
                x=0;
                while(1)
                {
                    if(count>=len)break;
                    printf("%c",ara[pos]);
                    count++;
                    pos=pos+s;
                    if(count%s==0)
                    {
                        x++;
                        pos=x;

                    }
                }
                printf("\n");
            }

        }
    }


    return 0;
}
