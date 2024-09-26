#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <queue>

using namespace std;

void solve() {
    int n;
    int sum = 0;
    cin >> n;
    priority_queue<int> pq;
    
    int sizeThresh;
    if (n % 2 == 0) {
        sizeThresh = (n/2) + 1;
    } else {
        sizeThresh = (n + 1)/2;
    }

    int curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        sum += curr;
        pq.push(curr);
        if (pq.size() > sizeThresh) {
            pq.pop();
        }
    }
    int median = pq.top();
    int res = median * (n * 2) - sum + 1;

    if (n <= 2) {
        cout << -1 << endl;
    } else {
        cout << max(0, res) << endl;
    }

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

}
