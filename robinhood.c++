#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;

void solve() {
    int n; int k;
    cin >> n >> k;

    int numP = 0;
    int numGold = 0;
    int curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr >= k) {
            numGold += curr;
        } else if (curr == 0 && numGold > 0) {
            numP += 1;
            numGold -= 1;
        }
    }
    cout << numP << endl;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

}