#include <stdio.h>
#include <stdlib.h>


 int main()
{
    int n,i,a=0,b=0,c=0,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        char ara[10];
        scanf("%s",&ara);


        if(ara[3]!=NULL) { printf("3\n");continue;}

        j=0;
        while(ara[j]!=NULL)
        {
            if(ara[j]=='o'||ara[j]=='n'||ara[j]=='e') a++;
            if(ara[j]=='t'||ara[j]=='w'||ara[j]=='o') b++;


            j++;
        }
        if(a>b) printf("1\n");
        if(b>a) printf("2\n");

        a=0;b=0;

    }
    return 0;
}
