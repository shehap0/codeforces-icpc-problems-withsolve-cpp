#include <iostream>

using namespace std;

int main(){int num1,num2;
    cin>>num1>>num2;
    int sum =num1+num2;
    long long int eldarb= num1 * num2;

    //5 + 10 = 15
    //5 * 10 = 50
    //5 - 10 = -5

    cout<<num1<<" + "<<num2<<" = "<<sum;
    cout<<"\n"<<num1<<" * "<<num2<<" = "<<eldarb;
    cout<<"\n"<<num1<<" - "<<num2<<" = "<<num1-num2;

    return 0;
}
