#include <iostream>
#include <cstdio>
using namespace std;

#define max 10000001

bool prime[max]= {false};
void generate()
{
    for(int i=2; i<max; i++)
        if(!prime[i])
            for(int j=i+i; j<max; j+=i)
                prime[j]=true;
}


int main()
{
    generate();
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n<8)printf("Impossible.\n");
        else
        {
            if(n%2==0)
            {
                printf("2 2 ");
                n-=4;
            }
            else
            {
                printf("2 3 ");
                n-=5;
            }

            for(int i=2; i<=n; i++)
                if((!prime[i]&&!prime[n-i]))
                    {
                        printf("%d %d\n",i,n-i);
                        break;
                    }



        }
    }
    return 0;
}
