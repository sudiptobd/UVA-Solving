//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stack>
#include <math.h>

///using namespace std;

int main()
{
    int n,x,y,r,i;
    float min,max,len;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&x,&y,&r);
        len=sqrt(pow(x,2)+pow(y,2));
        min=r-len;
        max=r+len;
        printf("%.2f %.2f\n",min,max);
    }
    

    return 0;
}

