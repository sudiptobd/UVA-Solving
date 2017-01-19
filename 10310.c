#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int n,i;
   double gx,gy,dx,dy;
   int count=0;
   while(1)
   {
       int chk=scanf("%d %lf %lf %lf %lf",&n,&gx,&gy,&dx,&dy);
       if(chk!=5)break;
       double x[n],y[n],gl[n],dl[n];
       for(i=0;i<n;i++)
       {
           scanf("%lf %lf",&x[i],&y[i]);
           gl[i]=(((gx-x[i])*(gx-x[i]))+((gy-y[i])*(gy-y[i])));
           dl[i]=((dx-x[i])*(dx-x[i]))+((dy-y[i])*(dy-y[i]));
       }

       int flag=1;
        for(i=0;i<n;i++)
            if(4*gl[i]<=dl[i])
            {
                printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",x[i],y[i]);
                flag=0;
                break;
            }
        if(flag)printf("The gopher cannot escape.\n");
   }


    return 0;
}
