#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
    map<int ,string>m;
    m[2]="00\n01\n81\n";
    m[4]="0000\n0001\n2025\n3025\n9801\n";
    m[6]="000000\n000001\n088209\n494209\n998001\n";
    m[8]="00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n";
    int n;
    while(scanf("%d",&n)==1)cout<<m[n];
    return 0;
}
