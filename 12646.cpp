#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a+b+c==3||a+b+c==0)printf("*\n");
        else if(a+b+c==2)
        {
            if(!a)printf("A\n");
            else if(!b)printf("B\n");
            else printf("C\n");
        }
        else if(a+b+c==1)
        {
            if(a)printf("A\n");
            else if(b)printf("B\n");
            else printf("C\n");
        }
    }

    return 0;
}
