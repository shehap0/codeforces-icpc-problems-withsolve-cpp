#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

// Function to break down elements of array a by repeatedly halving
vector<int> normalize(vector<int> a) {
    priority_queue<int> pq;
    
    // Push all elements of a into a max heap (priority queue)
    for (int x : a) {
        pq.push(x);
    }

    vector<int> result;
    
    while (!pq.empty()) {
        int top = pq.top();
        pq.pop();
        
        // Add the largest element to the result vector
        result.push_back(top);
        
        // Keep breaking the element into halves while it's even
        while (top % 2 == 0) {
            top /= 2;
            pq.push(top);
        }
    }

    return result;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Normalize both arrays by breaking down large numbers
    a = normalize(a);
    
    // Sort both arrays for comparison
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Compare the two arrays
    if (a == b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
