#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a;
    scanf("%d",&a);
    int h,m,i,t;

    for(i=1;i<=a;i++)
    {
        scanf("%d:%d",&h,&m);

        if(h==12&&m==00){printf("12:00\n");continue;}

        else if(h==12)h=0;
        if(m==00)h=12-h;
        else
        {
            h=12-h-1;
            m=60-m;
        }

        if(h==0)h=12;

        if(h<10&&m<10)printf("0%d:0%d\n",h,m);
       else if(m<10) printf("%d:0%d\n",h,m);
       else if(h<10) printf("0%d:%d\n",h,m);
       else printf("%d:%d\n",h,m);
    }
    return 0;
}

