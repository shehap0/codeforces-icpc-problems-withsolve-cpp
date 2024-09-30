#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin >> testcase;

    int arr[testcase];
    for(int i=1;i<=testcase;i++)
    {
        cin>>arr[i];
    }
    int searching_num;
    cin>>searching_num;



    bool found =false;
    int *p=&arr[0];
    sort(arr,arr+testcase);

    if(binary_search(arr[0],arr[testcase],searching_num))
    {
        found =true;
    }else{found=false;}

    if(found){cout<<"1";}
    else{cout<<"-1";}

    return 0;


    return 0;
}