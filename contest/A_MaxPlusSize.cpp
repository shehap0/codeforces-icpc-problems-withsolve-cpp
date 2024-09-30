#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcase; cin>>testcase;

    while(testcase--)
    {
        int size; cin>>size;
        int arr[size];
        
        //get array
        for (int i = 0; i <size; i++)
        {
            cin>>arr[i];
        }

        int i=0,maxmum,first=arr[0],count=0;
        while(i<size)
        {
            maxmum=max(arr[i+2],arr[i+3]);
            count++;
            if(maxmum==arr[i+2]){i+=2;}else{i+=3;}
        }
        
        cout<<max(first,maxmum) + count<<"\n";
    }
    
    return 0;
}