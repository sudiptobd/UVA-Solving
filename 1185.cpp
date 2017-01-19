#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
double a[10000005];
void ilog()
{
    a[0]=0;
    for(int i=1;i<10000005;i++)a[i]=a[i-1]+log(i);
}
int main()
{
    ilog();
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%.0lf\n",floor(a[n]/log(10.0) + 1.0));
    }

    return 0;
}
