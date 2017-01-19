#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

union bitmask
{
    int n;
    char c[4];
}a,b;

int main()
{
    while( scanf("%d",&a.n)==1 )
    {
        b.c[0]=a.c[3];
        b.c[1]=a.c[2];
        b.c[2]=a.c[1];
        b.c[3]=a.c[0];

        printf("%d converts to %d\n",a.n,b.n);
    }
    return 0;
}
