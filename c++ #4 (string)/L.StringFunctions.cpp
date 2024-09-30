#include <bits/stdc++.h>
using namespace std;

int main(){
    int stringsize,steps; cin>>stringsize>>steps;
    string name; cin>>name;

    for(int i=0;i<steps;)
    {
        string result=name;
        string operation; cin>>operation;
        if(operation=="sort" or operation=="reverse" or operation=="substr")
        {
            int x,y; cin>>x>>y;
            if(operation=="sort")
            {
                sort(result.begin()+x,result.end()+y);
            }
            if(operation=="reverse")
            {
                reverse(result.begin()+x,result.end()+y);
            }
            i++;
        }
        if(operation=="push_back"){string x; cin>>x; result += x; i++;}
        
        if(operation=="pop_back"){result.pop_back(); i++;}

        if(operation=="front" or operation=="back" or operation=="print")
        {
            if(operation=="front"){cout<<result[0];}
            if(operation=="back"){cout<<result[result.size()-1];}
            if(operation=="print"){int x; cin>>x; cout<<result[x];}
            i++;
            continue;
        }
    }
    return 0;
}