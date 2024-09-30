#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int x; cin>>x;
    int arr[x];
    for (int i =0; i <x; i++)
    {
        cin>>arr[i];
    }
    
    int summation=0;
    for (int y =0; y <x; y++)
    {
        summation =summation + abs(arr[y]);
    }
    cout<<summation;
    
    return 0;
}