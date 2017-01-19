#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1){
    getchar();
    while(n--)
    {
        char ch;
        int i=3;
        int sum=0;
        while(i--)
        {
            scanf("%c",&ch);
            sum+=((ch-65)*pow(26,i));
            //printf("%c%d",ch,i);
        }
        //printf("%d",sum);
        scanf("%c",&ch);
        int j;
        scanf("%d",&j);
        getchar();
        //printf("%d",j);
        sum=abs(sum-j);
        if(sum<=100)printf("nice\n");
        else printf("not nice\n");


    }
    }
    return 0;
}
