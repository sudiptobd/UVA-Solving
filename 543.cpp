#include <iostream>
#include <cstdio>
#include <cstdlib>
#define max 1000001
using namespace std;

bool prime[max]= {false};

void generate()
{
    for(int i=2;i<max;i++)
        if(!prime[i])
            for(int j=i+i;j<max;j+=i)
                prime[j]=true;
}

int main()
{
    generate();
    int n;bool flag=true;
    while(scanf("%d",&n)&&n)
    {
        for(int i=3; i<=n; i+=2)
         if(!prime[n-i]&&!prime[i])
         {
             printf("%d = %d + %d\n",n,i,n-i);
             flag=false;
             break;
         }
         if(flag)printf("Goldbach's conjecture is wrong.\n");
    }



    return 0;
}
