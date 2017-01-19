# include <stdio.h>
# include <math.h>
int main()
{
    long long i,a,n,p;
   scanf("%lld",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%lld",&a);
       p= (sqrt(1+8*a)-1)/2;
       printf("%lld\n",p);
   }
    return 0;
}
