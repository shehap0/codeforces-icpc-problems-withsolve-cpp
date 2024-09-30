#include <iostream>
using namespace std;

int main() {
    string stones, instruction; 
    cin >> stones >> instruction;

    int i = 0; // Index for stones
    int position = 1; // 1-based index for the current position of Liss

    // Process each instruction
    for (char c : instruction) {
        if (i < stones.size() && stones[i] == c) {
            i++; // Move to the next stone
            position++; // Increment position
        }
    }

    cout << position << endl; // Output the final position

    return 0;
}