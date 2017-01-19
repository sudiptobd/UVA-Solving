#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
char ara[1000000001];
void generate()
{

    int rate=1;
    for(int i=1;i<1000000001;i+=rate)
    {
        ara[i]=1;
        rate*=2;
    }
}


int main()
{
    generate();
    int n;
    while(scanf("%d",&n)&&n)
        if(ara[n])printf("Bob\n");
        else printf("Alice\n");

    return 0;
}
