#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

long long n; long long k; 
void solve() {
    cin >> n >> k;
    vector<long long> vals(n,0);
    for (int i = 0; i < n; i++) {
        cin >> vals[i];
    }

    sort(vals.begin(), vals.end());

    long long prevNum = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (n-i) * (vals[i] - prevNum);
        prevNum = vals[i];
        if (sum >= k) {
            cout << k + i << endl;
            break;
        }
    }


}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}