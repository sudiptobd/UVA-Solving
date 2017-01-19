#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int x,y,a,b;
    while(scanf("%d %d %d %d",&x,&y,&a,&b)&&x)
    {
        int dx=(x-a);
        int dy=(y-b);
        if(dx<0)dx*=-1;
        if(dy<0)dy*=-1;
        if(dx==0&&dy==0)printf("0\n");
        else if(dx==dy||dx==0||dy==0)printf("1\n");
        else printf("2\n");
    }

    return 0;
}
