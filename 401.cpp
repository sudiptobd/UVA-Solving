#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    char ch[257];
    ch['A']='A';
    ch['E']='3';
    ch['H']='H';
    ch['I']='I';
    ch['J']='L';
    ch['L']='J';
    ch['M']='M';
    ch['O']='O';
    ch['S']='2';
    ch['T']='T';
    ch['U']='U';
    ch['V']='V';
    ch['W']='W';
    ch['X']='X';
    ch['Y']='Y';
    ch['Z']='5';
    ch['1']='1';
    ch['2']='S';
    ch['3']='E';
    ch['5']='Z';
    ch['8']='8';
    string str,pal,mir;
    while(cin>>str)
    {
        pal="\0";
        mir="\0";
        int l=str.length();
        while(l--)
        {
            pal+=str[l];
            mir+=ch[str[l]];
        }

        if(str!=pal && str!=mir)cout<<str<<" -- is not a palindrome."<<endl<<endl;
        else if(str==pal && str!=mir)cout<<str<<" -- is a regular palindrome."<<endl<<endl;
        else if(str!=pal && str==mir)cout<<str<<" -- is a mirrored string."<<endl<<endl;
        else cout<<str<<" -- is a mirrored palindrome."<<endl<<endl;
    }


}
