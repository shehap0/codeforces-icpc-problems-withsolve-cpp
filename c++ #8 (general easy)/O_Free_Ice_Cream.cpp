#include <iostream>
using namespace std;

int main(){
    int testcase,packs; cin>>testcase>>packs;

    int distressed_kids=0;
    while(testcase--)
    {
        char test; cin>>test;
        int num; cin>>num;

        if(test=='+'){packs+=num;}
        else if(test=='-')
        {
            if(packs>=num)
            {
                packs-=num;
            }else{distressed_kids++;}
        }
    }
   
   cout<<packs<<" "<<distressed_kids;

    return 0;
}