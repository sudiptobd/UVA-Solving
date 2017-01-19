#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int a[2000000];
int n,i;
int main()
{
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n-1;i++)printf("%d ",a[i]);
        printf("%d",a[n-1]);
        printf("\n");
    }
    return 0;
}
