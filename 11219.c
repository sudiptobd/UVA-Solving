#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,age;  double d1,d2,m1,m2,y1,y2,rem;

    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lf/%lf/%lf",&d1,&m1,&y1);
            scanf("%lf/%lf/%lf",&d2,&m2,&y2);

            rem=(y1-y2)*12;
            rem=(rem+m1-m2)*365/12;
            rem=rem+d1-d2;
            if(rem<0){ printf("Case #%d: Invalid birth date\n",i); continue;}

            age=(int)rem/365;

            if(age>130) printf("Case #%d: Check birth date\n",i);
            else printf("Case #%d: %d\n",i,age);

        }
    }


    return 0;
}
