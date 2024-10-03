#include <iostream>
using namespace std;

int main(){                             // not today
    string s; cin>>s;

    int count=0; 
    for(int i=0; i<size(s) ;i++)
    {
        if(s[i]>'a')
        {
            count+=s[i]-'a';
        }
        
    }

    return 0;
}