#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;

int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}


int main()
{

    int b1,g1,c1,b2,g2,c2,b3,g3,c3;
    while(scanf("%d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {

        int min=b1+g1+c1+b2+g2+c2+b3+g3+c3;
        char ara[10]="BCG";
        if(g1+c1+b2+g2+b3+c3<min)
        {
            strcpy(ara,"BCG");
            min=g1+c1+b2+g2+b3+c3;
        }
        if(g1+c1+b2+c2+b3+g3<min)
        {
            strcpy(ara,"BGC");
            min=g1+c1+b2+c2+b3+g3;
        }
        if(b1+g1+g2+c2+b3+c3<min)
        {
            strcpy(ara,"CBG");
            min=b1+g1+g2+c2+b3+c3;
        }
         if(b1+g1+b2+c2+g3+c3<min)
        {
            strcpy(ara,"CGB");
            min=b1+g1+b2+c2+g3+c3;
        }
         if(b1+c1+g2+c2+b3+g3<min)
        {
            strcpy(ara,"GBC");
            min=b1+c1+g2+c2+b3+g3;
        }
         if(b1+c1+b2+g2+g3+c3<min)
        {
            strcpy(ara,"GCB");
            min=b1+c1+b2+g2+g3+c3;
        }
        printf("%s %d\n",ara,min);






    }
    return 0;
}
