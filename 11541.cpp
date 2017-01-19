#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=1; i<=n; i++)
    {
        char a[500];
        gets(a);
        int len=strlen(a);
        char ch;
        int no=0;
        int p=0;
        printf("Case %d: ",i);
        for(int j=0; j<len; j++)
        {
            if(a[j]>='A'&&a[j]<='Z')ch=a[j];
            else
            {
                while(a[j]>='0'&&a[j]<='9')
                {
                    no=no*pow(10,p++)+a[j]-48;
                    j++;
                }
                j--;

                for(int k=0;k<no;k++)printf("%c",ch);
                p=0;
                //printf("(%d)",no);
                no=0;
            }


        }
        printf("\n");
    }
    return 0;
}
