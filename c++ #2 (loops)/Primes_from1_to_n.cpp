#include <iostream>
using namespace std;

int main(){
    int x,test=0;
    cin>>x;

    for (int i=1; i<=x ;i++)
    {
        if(x/i>1){
            cout<<i<<" ";
        }   
    }
    return 0;
}