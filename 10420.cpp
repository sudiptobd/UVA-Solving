#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int n;
char a[2002][80];

void isort()
{
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0 && strcmp(a[j],a[j-1])<0)
        {
            swap(a[j],a[j-1]);
            j--;
        }
    }
}


int main()
{

    scanf("%d",&n);
    getchar();

    for(int i=0; i<n; i++)
    {
        gets(a[i]);
        int len=strlen(a[i]);
        for(int j=0;j<len;j++)
            if(a[i][j]==' ')
            {
                a[i][j]='\0';
                break;
            }
    }
    isort();
    int count =1;
    bool flag;
    for(int i=1; i<n; i++)
    {
        if(!strcmp(a[i],a[i-1]))count++,flag=true;
        else
        {
            printf("%s %d\n",a[i-1],count);
            count=1;
            flag=false;
        }
    }
    if(flag)printf("%s %d\n",a[n-1],count);
    return 0;
}
