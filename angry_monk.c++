#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

long long n; int k;
void solve() {
    cin >> n >> k;
    long long maxVal = 0;
    long long currval;
    for (int i = 0; i < k; i++) {
        cin >> currval;
        maxVal = max(maxVal, currval);
    }

    cout << (n - maxVal) + (n - maxVal) - (k - 1) << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    

}