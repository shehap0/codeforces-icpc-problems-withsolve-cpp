#include <iostream>
using namespace std;

int main(){
    int testcase; cin>>testcase;

    while (testcase--)
    {
        int num,k; cin>>num>>k;
        int arr[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
        }

        int count=0,gold=0;
        // robin helps lol
        for(int i=0;i<num;i++)
        {
            if(arr[i]>=k)
            {
                gold+=arr[i];
            }else if(arr[i]==0 and gold>0)
            {
                count++;
                gold--;
            }
        }

        cout<<count<<"\n";

    }
    return 0;
}