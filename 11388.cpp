#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a, &b);
        if(b%a==0)printf("%d %d\n",a,b);
        else printf("-1\n");
    }
    return 0;
}
