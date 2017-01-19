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

int sc()
{
    int n;
    scanf("%d",&n);
    return n;

}

int main()
{
//freopen("in.txt","w",stdout);
    int m=sc(),n=sc();
    getchar();
    map<string,string>ms;
    map<string,bool>mb;

    while(m--)
    {
        string a,b;
        cin>>a>>b;
        ms[a]=b;
        mb[a]=true;
        //cout<<a<<" "<<b<<endl;
    }
    while(n--)
    {
        string a;
        cin>>a;
        if(mb[a])
        {
            cout<<ms[a]<<"\n";
        }
        else if(a[a.size()-1]=='y'&&(a[a.size()-2]!='a'&&a[a.size()-2]!='e'&&a[a.size()-2]!='i'&&a[a.size()-2]!='o'&&a[a.size()-2]!='u'))
        {
            for(int i=0;i<a.size()-1;i++)cout<<a[i];
            cout<<"ies\n";
        }
        else if(a[a.size()-1]=='o')
        {
            for(int i=0;i<a.size();i++)cout<<a[i];
            cout<<"es\n";
        }
        else if(a[a.size()-1]=='s')
        {
            for(int i=0;i<a.size();i++)cout<<a[i];
            cout<<"es\n";
        }
        else if(a[a.size()-1]=='x')
        {
            for(int i=0;i<a.size();i++)cout<<a[i];
            cout<<"es\n";
        }
        else if(a[a.size()-1]=='h'&&a[a.size()-2]=='c')
        {
            for(int i=0;i<a.size();i++)cout<<a[i];
            cout<<"es\n";
        }
        else if(a[a.size()-1]=='h'&&a[a.size()-2]=='s')
        {
            for(int i=0;i<a.size();i++)cout<<a[i];
            cout<<"es\n";
        }
        else
        {
            cout<<a<<"s\n";
        }
    }




return 0;

}











