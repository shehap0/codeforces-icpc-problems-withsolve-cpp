#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        string s,t; cin>>s>>t;
        for(int w=0,q=0;q<(size(s)+size(t));q++,w++)
        {
            if(w<size(s))
            {
                cout<<t[w];
                continue;
            }
            if(w<size(t))
            {
                cout<<s[w];
                continue;
            }
            cout<<s[w]<<t[w];
        }
        cout<<"\n";
    }
    
    return 0;
}