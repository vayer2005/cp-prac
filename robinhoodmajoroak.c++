#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

void solve() {
    int n; int k;
    cin >> n >> k;

    int start = max(1, n - k + 1);
    long long res = k * (2 * n - k + 1)/2;
    if (res % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

}
