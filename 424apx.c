#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[105];
    char sum[1162];
    int i,j;
    for(i=0;i<1162;i++)sum[i]='0';
    sum[1161]=NULL;
    int l,temp,carry=0;
    while(scanf("%s",input),strcmp(input,"0")!=0)
    {
        l=strlen(input);
        for(i=l-1,j=1160;i>=0;j--,i--)
        {
            temp=sum[j]+input[i]+carry-48-48;
            if(temp>=10){sum[j]=(temp%10)+48;carry=1;}
            else {sum[j]=temp+48;carry=0;}
        }
        carry=0;
    }

    int got=0;
    for(i=0;i<1161;i++)
    {
        if(sum[i]=='0'&& got==0)continue;
        else got=1;
        printf("%c",sum[i]);

    }

    if(got==0)printf("0");
    printf("\n");

    return 0;
}
