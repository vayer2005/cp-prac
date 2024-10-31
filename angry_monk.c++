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
    long long currNum;
    long long maxVal = 0;
    for (int i = 0; i < k; i++) {
        cin >> currNum;
        maxVal = max(maxVal, currNum);
    }

    cout <<  2 * (n - maxVal) - (k-1) << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    

}