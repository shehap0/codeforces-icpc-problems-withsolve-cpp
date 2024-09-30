#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;

    while(testcase--)
    {
        string s; cin>>s;

        if(size(s)<=10)
        {
            cout<<s<<"\n";
        }else
        {
            cout<<s[0]<<size(s)-2<<s[size(s)-1]<<"\n";
        }


    }
    return 0;
}

