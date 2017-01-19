#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        printf("%d\n",(n/3)*(m/3));
    }
    return 0;
}
