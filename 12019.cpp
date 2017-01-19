#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void printdoom(int doom)
{
         if(doom==1)printf("Saturday\n");
    else if(doom==2)printf("Sunday\n");
    else if(doom==3)printf("Monday\n");
    else if(doom==4)printf("Tuesday\n");
    else if(doom==5)printf("Wednesday\n");
    else if(doom==6)printf("Thursday\n");
    else if(doom==0)printf("Friday\n");
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
        {
            int m,d,total=0;
            scanf("%d %d",&m,&d);
            for(int j=0;j<m;j++)total+=month[j];
            total+=d;
            int doom=total%7;
            printdoom(doom);
        }
    }

    return 0;
}

