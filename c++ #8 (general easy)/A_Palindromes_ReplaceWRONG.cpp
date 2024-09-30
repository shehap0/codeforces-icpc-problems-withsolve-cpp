#include <iostream>
using namespace std;

int main(){
    string s; cin>>s;
    // if string all ????? lol
    bool therestring=false;
    for (int i = 0; i<size(s); i++)
    {
        if(s[i]!='?')
        {
            therestring=true;
            break;
        }
    }
    

    if(therestring){
    // replacing ?
    for(int i=0;i<size(s);i++)
    {
        if(s[i]=='?')
        {
            s[i]=s[size(s)-i-1];
        }
    }

    // checking if palandromes
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