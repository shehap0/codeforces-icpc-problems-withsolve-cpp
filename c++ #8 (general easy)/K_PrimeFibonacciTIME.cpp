#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;

    while(testcase--)
    {
        int count; cin>>count;
        int f1=0,f2=1,f3;
        if(count==1 or count==2 or count==3){cout<<"not prime\n"; continue;}
        for (int i = 0; i <= count; i++)
        {
            f3=f2+f1;
            f1=f2;
            f2=f3;
        }

        // lol this shit is taking alot of time
        bool test=false;
        for(int i = 2; i < f3; i++)
        {
            if(f3%i==0)
            {
                cout<<"not prime\n";
                test=true;
                break;
            }
        }
        if(test==true)
        {
            continue;
        }
        
        cout<<"prime\n";
    }
    
    return 0;
}