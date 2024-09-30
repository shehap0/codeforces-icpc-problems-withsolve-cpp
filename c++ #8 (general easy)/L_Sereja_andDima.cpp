#include <bits/stdc++.h>
using namespace std;

int main(){
    int size; cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    long long sereja=0,dima=0;
    sort(arr,arr+size);
    reverse(arr,arr+size);
    bool test=true;
    for (int i = 0; i < size; i++)
    {
        if(test)
        {
            sereja+=arr[i];
            test=false;
        }else{dima+=arr[i]; test=true;}
    }
    
    cout<<sereja<<" "<<dima;

    return 0;
}