#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

long long n, m v;

void solve() {
    cin >> n >> m >> v;
    vector<long long> vals(n,0);

    for (int i = 0; i < n; i++) {
        cin >> vals[i];
    }
    sort(vals.begin(), vals.end());
    currSum = 0;
    maxAlice = 0;
    for (int i = 0; i < n; i++) {
        
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    

}