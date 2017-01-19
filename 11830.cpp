#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        getchar();
        char ara[150];
        scanf("%s",ara);
        int len=strlen(ara);
        char ch=n+48;
        //printf("(%c) (%s)",ch,ara);
        bool flag=false,lead_zero=true;
        for(int i=0;i<len;i++)
        {
            //printf("%c %c\n",ara[i],ch);
            //
            if(ara[i]!=ch)
            {
                if(ara[i]=='0')if(!lead_zero)continue;
                printf("%c",ara[i]);
                flag=true;
                lead_zero=false;
            }
        }
        if(!flag)printf("0");
        printf("\n");


    }
    return 0;
}
