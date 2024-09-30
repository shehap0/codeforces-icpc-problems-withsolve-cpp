#include <iostream>
using namespace std;

bool isdivisibleBy6(const string& N){
    int digitSum=0;
    char lastDigit = N[N.size()-1];

    //lol i forget overflow again, if you see this iam not using AL 
    for(char ch:N) digitSum+=ch-'0';

    bool divisibleBy2=(lastDigit -'0')%2==0;
    bool divisibleBy3=(digitSum%3==0);

    return divisibleBy2 and divisibleBy3;
}

int main(){
    int Testcase; cin>>Testcase;
    while(Testcase--)
    {
        string N; cin>>N;
        //forget the newline
        if(isdivisibleBy6(N)){
            cout<<"YES";
        }else{cout<<"NO";}
        cout<<"\n";
    }
    return 0;
}
