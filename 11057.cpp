#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        //int mx= 100000000;
        vector<int>v;
        for(int i=0; i<n; i++)v.push_back(sc());
        sort(v.begin(),v.end());
        int money=sc();
        int a,b;
        for(int i=0; i<v.size(); i++)
            for(int j=i+1; j<v.size(); j++)
                if(v[i]+v[j]==money/*&&abs(v[i]-v[j])<mx*/)a=v[i],b=v[j];




    printf("Peter should buy books whose prices are %d and %d.\n\n",a,b);

}
return 0;
}
