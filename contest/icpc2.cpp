#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    string input;
    cin>>input;

    int h=0,e=0,l=0,o=0;
    for(int i=0;i<testcase;i++)
    {
        if(input[i]=='h')
        {
            h++;
        }
        if(input[i]=='e')
        {
            e++;
        }
        if(input[i]=='l')
        {
            l++;
        }
        if(input[i]=='o')
        {
            o++;
        }
    }
    for (int infinty = 9; infinty > 1; infinty++)
    {
        if (h=='0' or e=='0' or l=='0' or e=='0')
        {
            cout<<"0";
            return 0;
        }
        
        int p=1;int w=2;
        if(h==p and e==p and l==w and o==p)
        {
            cout<<p;
            return 0;
        }
        p++; w+=2; 
    }

    return 0;
}