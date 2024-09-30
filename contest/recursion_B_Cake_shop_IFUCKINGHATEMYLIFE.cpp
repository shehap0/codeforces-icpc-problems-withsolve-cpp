#include <iostream>
using namespace std;

int main() {
    int x, r;
    cin >> x >> r;
    
    int last_digit_x = x % 10;

    // Check for the smallest n such that (n * last_digit_x) % 10 == r
    for (int n = 1; n <= 10; ++n) {
        if ((n * last_digit_x) % 10 == r) {
            cout << n << endl;
            break;
        }
    }
    
    return 0;
}
