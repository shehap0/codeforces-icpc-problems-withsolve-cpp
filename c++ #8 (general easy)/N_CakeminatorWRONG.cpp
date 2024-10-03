#include <iostream>
using namespace std;

int main(){
    int rows,colums; cin>>rows>>colums;

    string arr[100][100];
    for (int i = 0; i < rows; i++)
    {
        for (int w = 0; w <colums; w++)
        {
            cin>>arr[i][w];
        }
    }
    
    // lets get to the hard part i fucking hate this
    int count=0,test=0;
    //rows
    for (int i = 0; i < rows; i++)
    {
        for (int w = 0; w < colums; w++)
        {
            if(arr[i][w]=="S")
            {
                test=0;
                break;
            }
            if(arr[i][w]==".")
            {
                test++;
                arr[i][w]='#';
            }
        }
        count+=test;
        test=0;
    }

    for (int i = 0; i < colums; i++)
    {
        for (int w = 0; w < rows; w++)
        {
            if(arr[w][i]=="S")
            {
                test=0;
                break;
            }
            if(arr[w][i]==".")
            {
                test++;
                arr[w][i]='#';
            }
        }
        count+=test;
        test=0;
    }
    



    cout<<count;
    return 0;
}