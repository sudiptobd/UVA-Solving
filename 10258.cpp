#include<bits/stdc++.h>

using namespace std;
#define inf 999999
#define MAX 100
#define gcd(a,b) __gcd(a,b)
#define lli long long int
int getInt(){int x;scanf("%d",&x);return x;}
long long getLongLong(){long long x;scanf("%I64d",&x);return x;}
double getDouble(){double x;scanf("%lf",&x);return x;}
char getChar(){char x;scanf("%c",&x);return x;}
#define Int getInt()
#define Char getChar()
#define Long getLongLong()
#define Double getDouble()
#define rep(i,n) for(int i=0;i<n;i++)


int mod(int n,int m)
{
    if(n<0)
        n+=(ceil(-n*1.00/m)*m);
    return n%m;
}
////////////////////////////////////

class team
{
public:
    int id;
    int solved=0;
    int penalty[12]={0};
    int total=0;
    bool submit=false;
};


bool comp(team a,team b)
{
    if(a.solved!=b.solved) return b.solved<a.solved;
    if(a.total!=b.total)  return b.total>a.total;
    return b.id>a.id;
}




char a[10],b[100];



int main()
{

   //freopen("out.txt","w",stdout);

    int n=Int;
    getchar();

gets(b);

    while(n--)
    {
        team ara[105];
        rep(i,104)ara[i].id=i;
        while(gets(b)&&strlen(b))
        {
            int id,sol,pen;
            char stat;
            sscanf(b,"%d %d %d %c",&id,&sol,&pen,&stat);
           // printf("(%d) (%d) (%d) (%c)\n",id,sol,pen,stat);
            ara[id].submit=true;
            if((stat=='I')&&(ara[id].penalty[sol]!=-1))
            {
                ara[id].penalty[sol]+=20;
                //ara[id].submit=true;
               // printf("-%d-\n",ara[id].penalty[sol]);
            }

            else if((stat=='C')&& (ara[id].penalty[sol]!=-1))
            {
                ara[id].solved++;
                ara[id].total+=ara[id].penalty[sol]+pen;
                //printf("-%d %d %d\n",ara[id].penalty[sol],pen,ara[id].total);
                ara[id].penalty[sol]=-1;
                //ara[id].submit=true;
            }
        }
       // printf("hell\n");
        sort(ara,ara+105,comp);
        rep(i,104)
            if(ara[i].submit)printf("%d %d %d\n",ara[i].id,ara[i].solved,ara[i].total);
        if(n)printf("\n");


    }
    return 0;
}



