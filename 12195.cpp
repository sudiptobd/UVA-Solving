#include<stdio.h>
#include<iostream>
#include<utility>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<deque>
#include<vector>
#include<ctype.h>
using namespace std;
#define lli long long int
#define gcd(a,b) __gcd(a,b)



int main()
{
//freopen("in.txt","r",stdin);


    char ara[500];
    while(gets(ara))
    {
        if(!strcmp(ara,"*"))break;
        vector<string>v;
        int len=strlen(ara);
        //cout<<len;
        for(int i=0; i<len; i++)
        {
            string a="";
            if(ara[i]=='/')
            {
                int j=i;
                if(j+1==len)break;
                while(++j<len&&ara[j]!='/')if(isalpha(ara[j]))a+=ara[j];
                i=j-1;
                if(a.size())v.push_back(a);
            }
        }
        //cout<<len;
        int count=0;
        for(int i=0; i<v.size(); i++)
        {
            double sum=0;
            for(int j=0; j<v[i].size(); j++)
            {
                if(v[i][j]=='W')sum+=1.0;
                else if(v[i][j]=='H')sum+=0.5;
                else if(v[i][j]=='Q')sum+=0.25;
                else if(v[i][j]=='E')sum+=0.125;
                else if(v[i][j]=='S')sum+=0.0625;
                else if(v[i][j]=='T')sum+=0.03125;
                else if(v[i][j]=='X')sum+=0.015625;
                //cout<<v[i][j]<<" "<<sum;


            }
            if(sum==1.0)count++;
            //cout<<v[i]<<" "<<sum<<endl;


        }
        printf("%d\n",count);
    }




    return 0;

}
