#include <iostream>
using namespace std;

string reverseString(const string &str) {
    string reversed_str;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed_str += str[i];
    }
    return reversed_str;
}

int main() {
    string str;
    cin>>str;
    string reversed_str = reverseString(str);

    cout<<reversed_str<<"\n";
    if (str==reversed_str)
    {
        cout<<"YES"<<endl;
    }else{cout<<"NO";}
    
    return 0;
}
