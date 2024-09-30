#include <iostream>
using namespace std;

int main() {
    char mazen, mahmoud;
    cin>>mazen>>mahmoud;
    string result;

    if(mazen==mahmoud)
    {
        result="Tie";
    }else if((mazen=='R' or mahmoud=='S') or (mazen=='S' or mahmoud=='P') or (mazen=='P' or mahmoud=='R')){
        result = "Mazen";
    }else{result = "Mahmoud";}

    cout<<result;

    return 0;
}
