#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_operations(vector<int> &a, int n){
    int max_len=1,current_len=1;

    for(int i=1; i < n;i++){
        if (a[i] >= a[i - 1]) {
            current_len++;
        } else {
            max_len = max(max_len, current_len);
            current_len = 1;
        }
    }
    
    // Handle the cyclic nature by checking the last element with the first one
    if(a[n-1]<=a[0])
    {
        current_len += max_len;  // Combine the last part with the first part if possible
    }else{
        max_len = max(max_len, current_len);
    }
    
    return n - max(max_len, current_len);
}

int main() {
    int testcase;
    cin>>testcase;

    while(testcase--){
        int n; cin>>n;

        vector<int> a(n);
        for(int i=0; i<n;i++){ cin >> a[i];}

        if(n==1)
        {
            cout<<0;
        }else
        {cout<<min_operations(a,n);}
    }

    return 0;
}
