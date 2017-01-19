#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int j,a,mile=0,juice=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a);

            //for MILE.
            //if(a%30==0)mile=mile+(a/30)*10;
           /* else*/ mile=mile+((a/30)+1)*10;
            //for JUICE
          //  if(a%60==0)juice=juice+(a/59)*15;else
             juice=juice+((a/60)+1)*15;
        }

        if(mile<juice)printf("Case %d: Mile %d\n",i,mile);
       else if(mile>juice)printf("Case %d: Juice %d\n",i,juice);
       else if(mile==juice)printf("Case %d: Mile Juice %d\n",i,juice);
    }
    return 0;
}
