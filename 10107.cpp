#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int ara[10001];
int main()
{
    int i,n;
    for(i=0;;i++)
    {
        int chk=scanf("%d",&n);
        if(chk!=1)break;
        ara[i]=n;
        sort(ara,ara+i+1);
        if(i%2==0)printf("%d\n",ara[i/2]);
        else printf("%d\n",(ara[i/2]+ara[(i/2)+1])/2);
    }
    return 0;
}
