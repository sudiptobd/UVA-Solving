#include<bits/stdc++.h>
using namespace std;
int getInt()
{
    int x;
    scanf("%d",&x);
    return x;
}
long long getLongLong()
{
    long long x;
    scanf("%I64d",&x);
    return x;
}
double getDouble()
{
    double x;
    scanf("%lf",&x);
    return x;
}
char  getChar()
{
    char x;
    scanf("%c",&x);
    return x;
}
#define Int         getInt()
#define Char        getChar()
#define Long        getLongLong()
#define Double      getDouble()
//additonal
#define mp          make_pair
#define mt          make_tuple
#define X           first
#define Y           second
#define Z           third
#define pb          push_back
#define vi          vector<int>
#define pii         pair<int,int>
#define tii         tuple <int,int,int>
#define all(v)      v.begin(),v.end()
#define EPS         numeric_limits<double>::epsilon()
#define inf         999999999999999999
//memek
#define mset(a,v)   memset(a,v,sizeof(a))
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)    a*b/gcd(a,b)
#define lli         long long int
#define P           printf
#define PD(x)       printf("%d\n",x)
#define PDL(x)      printf("%I64d\n",x)
#define rep(i,n)    for(int i=0;i<n;i++)
#define Pi          3.1415926535
#define here        printf("here\n");
#define abar        main();
#define line        printf("\n");
#define fin         freopen("in.txt","r",stdin);
#define fout        freopen("out.txt","w",stdout);
#define faster      ios_base::sync_with_stdio(false); cin.tie(0);
#define in(t)     int t;cin>>t
#define sas         return 0

//////////////////////////////////
template<typename t>
t abs(t a)
{
    if(a>=0)
        return a;
    return -a;
}
//error


#define error(args...) { vector<string> _v = split(#args, ','); err(_v.begin(), args); '\n'; }

vector<string> split(const string& s, char c)
{
    vector<string> v;
    stringstream ss(s);
    string x;
    while (getline(ss, x, c))
        v.emplace_back(x);
    return move(v);
}

void err(vector<string>::iterator it) {}
template<typename T, typename... Args>
void err(vector<string>::iterator it, T a, Args... args)
{
    cerr << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << "  ";
    err(++it, args...);
}





int main()
{
    int n;
    while(n=Int)
    {
        lli x=Long;
        rep(i,n-1)
        {
            lli y=Long;
            x^=y;
        }
        if(x)puts("Yes");
        else puts("No");

    }

    sas;
}







