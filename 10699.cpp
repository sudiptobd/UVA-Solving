#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

#define max 1000001

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
    int n;
    while(scanf("%d",&n)&&n)
    {
        int count=0;
        for(int i=n;i>=2;i--)
        {
            if(!prime[i])
                if(n%i==0)count++;
        }
        printf("%d : %d\n",n,count);
    }
    return 0;
}
