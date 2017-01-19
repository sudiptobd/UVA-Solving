#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int count=0;
    for(int i=1;i<=t;i++)
    {
        double l,w,d,m;
        scanf("%lf %lf %lf %lf",&l,&w,&d,&m);
        if(((l<=56&&w<=45&&d<=25)||(l+w+d)<=125)&&m<=7)
        {
            printf("1\n");
            count++;
        }
        else printf("0\n");



    }
    printf("%d\n",count);
    return 0;
}
