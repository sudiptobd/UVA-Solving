#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k;
        scanf("%d",&k);
        getchar();

        char ch[k];
        int cent[k];
        for(int i=0; i<k; i++)
        {
            scanf("%c %d",&ch[i],&cent[i]);
            getchar();
        }

        int line;
        scanf("%d",&line);
        getchar();

        char ara[10009];
        double count=0;
        for(int j=1; j<=line; j++)
        {
            gets(ara);
            int len=strlen(ara);
            for(int x=0; x<len; x++)
                for(int y=0; y<k; y++)
                    if(ara[x]==ch[y])count+=cent[y];

        }
        printf("%.2lf$\n",count/100);


    }
    return 0;
}
