#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin >> testcase;

    for (int i=0; i < testcase; i++)
    {
        int result=1,num;
        cin >> num;

        for (int i=1; i <= num; i++)
        {
            result*=i;
        }
        cout<<result<<"\n";
    }
    

    return 0;
}