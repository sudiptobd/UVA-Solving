#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    /*int n;
    while(scanf("%d",&n)==1)
    {
        n=(n-1)+(int )log2(n-1);
        printf("%d\n",n);
    }*/

    for(int n;scanf("%d",&n)==1;n=(n-1)+(int )log2(n-1),printf("%d\n",n));
    return 0;
}
