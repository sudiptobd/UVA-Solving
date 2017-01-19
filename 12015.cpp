#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int findmaxi(int prank[10])
{
    int maxi=0;
    for(int i=0; i<10; i++)if(prank[i]>maxi)maxi=prank[i];
    return maxi;
}

int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        for(int c=1; c<=t; c++)
        {
            char ara[10][150];
            int prank[10];
            for(int i=0; i<10; i++)
            {
                getchar();
                scanf("%s",ara[i]);
                scanf("%d",&prank[i]);
            }
            int maxi=findmaxi(prank);
            printf("Case #%d:\n",c);
            for(int i=0; i<10; i++)
                if(prank[i]==maxi)
                    printf("%s\n",ara[i]);
        }


    }
    return 0;
}
