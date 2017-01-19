#include <stdio.h>
#include <stdlib.h>

int n,count,x=1,y=2;

void up()
{
    while(y>1)
    {
        if(count==n)return;
        x++;
        y--;
        count++;
    }
    if(count==n)return;
    x++;
    count++;
    if(count==n)return;

}

void down()
{
    while(x>1)
    {
        if(count==n)return;
        y++;
        x--;
        count++;
    }
    if(count==n)return;
    y++;
    count++;
    if(count==n)return;
}

int main()
{

    while(scanf("%d",&n)==1)
    {
        if(n==1){printf("TERM 1 IS 1/1\n");continue;}
        count=2;
        while(count!=n)
        {
           up();
           down();
        }
        printf("TERM %d IS %d/%d\n",n,x,y);
        x=1,y=2;


    }
    return 0;
}
