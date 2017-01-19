#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int  insertion_sort(int ara[],int n)
{
    int count =0;
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0 && ara[j]<ara[j-1])
        {
            swap(ara[j],ara[j-1]);
            j--;
            count++;
        }
    }
    return count;
}


int main()
{
    /*int n=5;
    int ara[]={12,1,25,11,0};
    insertion_sort(ara,n);
    for(int i=0;i<n;i++)printf("%d\t",ara[i]);
    */
    int n;
    while(scanf("%d",&n)==1)
    {
        int ara[n];
        for(int i=0;i<n;i++)scanf("%d",&ara[i]);
        printf("Minimum exchange operations : %d\n",insertion_sort(ara,n));
    }

    return 0;

}
