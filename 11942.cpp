#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(int i=0;i<n;i++)
    {
        int ara[10];
        for(int j=0;j<10;j++)scanf("%d",&ara[j]);
        bool asc=false,dsc=false;
        for(int j=1;j<10;j++)
            if(ara[j]>ara[j-1])asc=true;
            else if(ara[j]<ara[j-1])dsc=true;
        if(asc&&dsc)printf("Unordered\n");
        else printf("Ordered\n");


    }
    return 0;
}
