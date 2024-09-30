#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    while(testcase--)
    {
        int x,y; cin>>x>>y;

        // numbers of operations
        int a=x,b=x+1,c;
        int operations=0; bool testAB=true,testBC=false;
        for(int i = x; i<y; i++)
        {
            if(testAB){if(gcd(a,b)==1)
            {
                testAB=false; testBC=true; c=b+1; break;
            }else{b++;}
            }
            if(testBC)
            {
                if(gcd(b,c)==1)
                {
                    operations++;
                    break;
                }else{c++;}
            }
            
        }
        cout<<operations<<"\n";
    }

    return 0;
}