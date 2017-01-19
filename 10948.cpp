#include <iostream>
#include <cstdio>

using namespace std;

#define max 10000001
bool prime[max]= {false};
void generate()
{
    for( int i=2;i<max;i++)
        if(!prime[i])
            for( int j=i+i;j<max;j+=i)
                prime[j]=true;
}

int main()
{
    generate();
    int n;
    while(scanf("%d",&n)&&n)
    {
        printf("%d:\n",n);
        bool flag=false;
        int i;
        for( i=2;i<n;i++)
            if(!prime[i]&&!prime[n-i])
            {
                flag=true;
                //if(flag)printf("ok-");
                //else printf("nok-");
                break;
            }

        if(!flag)printf("NO WAY!\n");
        else printf("%d+%d\n",i,n-i);

    }
    return 0;
}
