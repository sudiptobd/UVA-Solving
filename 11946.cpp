#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char a[100];
        while(gets(a)!='\0')
        {
            int len=strlen(a);
            if(len==0)break;
            for(int i=0; i<len; i++)
            {
                if(a[i]=='4')cout<<"A";
                else  if(a[i]=='8')cout<<"B";
                else  if(a[i]=='3')cout<<"E";
                else  if(a[i]=='6')cout<<"G";
                else  if(a[i]=='1')cout<<"I";
                else  if(a[i]=='0')cout<<"O";
                else  if(a[i]=='9')cout<<"P";
                else  if(a[i]=='5')cout<<"S";
                else  if(a[i]=='7')cout<<"T";
                else  if(a[i]=='2')cout<<"Z";
                else cout<<a[i];
            }
            cout<<endl;
        }
        if(t)cout<<endl;
    }
    return 0;
}
