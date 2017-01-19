#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
using namespace std;
char ara[]="@IEHOVA#";
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        getchar();
        map<char,int>mp;

        for(int i=m;i>=1;i--)
        {
            char ar[10];
            gets(ar);
            for(int j=0;j<n;j++)mp[ar[j]]=i*10+j+1;
        }


        int px,py,cx,cy;
        px=mp['@']%10;
        py=mp['@']/10;
        for(int i=1;i<8;i++)
        {
            cx=mp[ara[i]]%10;
            cy=mp[ara[i]]/10;
            if(py<cy)printf("forth");
            else if(px<cx)printf("right");
            else printf("left");

            if(i==7)printf("\n");
            else printf(" ");
            px=cx;
            py=cy;

        }



    }
    return 0;
}
