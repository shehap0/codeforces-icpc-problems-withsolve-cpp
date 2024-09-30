#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    
    int oldarr[testcase];
    for (int i = 0; i <testcase; i++)
    {
        cin>>oldarr[i];
    }
    int newarr[testcase];
    int num=0;
    for (int y = 0; y < testcase; y += 2)
    {
        newarr[num]=oldarr[y];
        num++;
    }
    for (int w = 1; w < testcase; w += 2)
    {
        newarr[num]=oldarr[w];
        num++;
    }

    for (int i = 0; i < testcase; i++)
    {
        cout<<newarr[i]<<" ";
    }
    
    return 0;
}