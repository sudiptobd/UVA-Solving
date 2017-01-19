#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);

    int n;
    scanf("%d",&n);
    getchar();
    char a[5][n*3+n+2];
    for(int i=0; i<5; i++)gets(a[i]);
    char form[6];
    char form1[]=".....";
    char form2[]="*.***";
    char form3[]="*.*.*";

    for(int j=0; j<n*3+n; j+=4)
    {
        for(int i=0; i<5; i++)form[i]=a[i][j];
        if(!strcmp(form,form1))printf("1");
        else if(!strcmp(form,form2))printf("2");
        else if(!strcmp(form,form3))printf("3");
    }
    printf("\n");


    return 0;
}
