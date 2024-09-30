#include <iostream>
using namespace std;

int main(){
    int x,test=0;
    cin>>x;

    for (int i=1; i<=x ;i++)
    {
        if(x/i>1 and x/i!=x){
            test++;
        }
        
    }
    if(test>2){
        cout<<"NO";
    }else{cout<<"YES";}
    
    
    return 0;
}