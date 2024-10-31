#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

long long n; long long m; long long r; long long c;
void solve() {
    cin >> n >> m >> r >> c;

    long long res = m - c + (m-1) * (n-r) + (n-r)*m;
    cout << res << endl;

    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    

}