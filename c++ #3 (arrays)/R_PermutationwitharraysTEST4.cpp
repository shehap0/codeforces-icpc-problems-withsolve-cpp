#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x; cin>>x;
    int arr1[x],arr2[x];

    for(int i=0;i<x;i++){cin>>arr1[i];}
    
    for(int i=0;i<x;i++){cin>>arr2[i];}

    sort(arr1,arr1+x);
    sort(arr2,arr2+x);
    for(int i=0;i<x;i++)
    {
        if(binary_search(arr2,arr2+x,arr1[i])){}else{cout<<"no"; return 0;}
    }
    for(int i=0;i<x;i++)
    {
        if(binary_search(arr1,arr1+x,arr2[i])){}else{cout<<"no"; return 0;}
    }
    
    cout<<"yes"; 
    
    return 0;
}