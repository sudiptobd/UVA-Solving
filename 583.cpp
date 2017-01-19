#include<cstdio>
#include<cstring>
#include<memory.h>
#include<iostream>
#include<cmath>
#include<vector>

//18700000
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        printf("%d = ",n);
        if(n<0)
        {
            printf("-1 x ");
            n=-1*n;
        }
        int root=sqrt(n);
        for(int i=2; i<=root;i++)
            while(n%i==0)
            {
                printf("%d",i);
                n=n/i;
                if(n>1)printf(" x ");
            }

        if(n>1)printf("%d",n);
        printf("\n");

    }

    return 0;
}
