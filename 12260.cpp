#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{

    int ara[128]={0};
    ara['B']=1;
    ara['F']=1;
    ara['P']=1;
    ara['V']=1;
    ara['C']=2;
    ara['G']=2;
    ara['J']=2;
    ara['K']=2;
    ara['Q']=2;
    ara['S']=2;
    ara['X']=2;
    ara['Z']=2;
    ara['D']=3;
    ara['T']=3;
    ara['L']=4;
    ara['M']=5;
    ara['N']=5;
    ara['R']=6;
    char str[100];
    while(gets(str))
    {
        int len=strlen(str);
        int pre=0;
        for(int i=0;i<len;i++)
        {
            if(ara[str[i]]!=0&&pre!=ara[str[i]])printf("%d",ara[str[i]]);
            pre=ara[str[i]];
        }

        printf("\n");
    }

    return 0;
}
