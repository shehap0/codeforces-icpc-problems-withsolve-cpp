#include <iostream>
using namespace std;

int main(){
    int l1,l2,r1,r2,biggestl,smallestl,biggestr,smallestr;
    cin>>l1>>l2>>r1>>r2;

    if(l1>l2)
    {
        biggestl=l1;
        smallestl=l2;
    }else{biggestl=l2;
          smallestl=l1;}

    if(r1>r2)
    {
        biggestr=r1;
        smallestr=r2;
    }else{biggestr=r2;
          smallestr=r1;}
        
    if(l1>r2 or r1>l2)
    {
        cout<<smallestr<<" "<<biggestl;
    }else{cout<<biggestl-smallestr;}
    return 0;
}