#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int d,i,j;
    while (scanf("%d", &d)==1)
    {
        if(d==0)break;
        int flag=0;
        for( i=1; i<60; i++)
        {
            for( j=0; j<=i; j++)
            {
                if(d==(i*i*i-j*j*j))
                {
                    flag=1;
                    break;
                }
            }
            if(flag)break;
        }
        if(flag) printf("%d %d\n",i, j);
        else printf("No solution\n");
    }
}
