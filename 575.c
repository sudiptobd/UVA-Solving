#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int l=5,i,temp;
    long long int sum=0;
    char input[500];
    while(gets(input))
    {
        if(!strcmp(input,"0"))break;
        l=strlen(input);
        for(i=l-1;i>=0;i--)
        {
            temp=input[i]-48;
            sum=sum+((pow(2,l-i)-1)*temp);
        }
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
