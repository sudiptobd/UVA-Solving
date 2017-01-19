#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,count,flag;
    char ara[1000];
    while(gets(ara))
    {
        count=0;
        flag=1;
        for(i=0;ara[i];i++)
        {
            if((ara[i]>='A'&&ara[i]<='Z')||(ara[i]>='a'&&ara[i]<='z'))
            {
                if(flag)count++;
                flag=0;
            }
            else
            flag=1;
        }
        printf("%d\n",count);
    }
    return 0;
}
