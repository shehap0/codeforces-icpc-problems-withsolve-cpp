#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    for (int i = 1; i <= x; i++)
    {
        int space = x - 1;
        int w=1;
        while (w<=space)
        {
            cout<<" ";
            w++;
        }w++;
        
        for (int y=1;y<=i;y++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
    return 0;
}