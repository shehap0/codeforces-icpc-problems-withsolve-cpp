#include <iostream>
using namespace std;

int main(){
    string s; cin>>s;
    // if string all ????? lol
    bool there_string=false;
    for (int i = 0; i<size(s); i++)
    {
        if(s[i]!='?')
        {
            there_string=true;
            break;
        }
    }
    

    if(there_string){
    // replacing ?
    for(int i=0;i<size(s);i++)
    {
        if(s[i]=='?')
        {
            s[i]=s[size(s)-i-1];
        }
    }

    // checking if palindromes
    for (int i = 0; i < size(s); i++)
    {
        if ( s[i] != s[size(s)-i-1] ) {cout<<"-1"; return 0;}
    }
    
    cout<<s;
    return 0;
    
    }

    cout<<"-1";
    return 0;
}