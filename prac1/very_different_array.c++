#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


void solve() {
    int n; int m;
    cin >> n >> m;
    vector<long long> a(n,0);
    vector<long long> b(m,0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin>> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    long long maxDiff = 0;
    for (int i = 0; i < n; i++) {
        maxDiff += abs(a[i] - b[i]);
    }
    long long prevDiff = maxDiff;
    long long currDiff;
    for (int i = n-1; i >= 0; i--) {
        currDiff = prevDiff - abs(a[i] - b[i]) + abs(a[i] - b[m-1-(n-1-i)]);
        prevDiff = currDiff;
        maxDiff = max(maxDiff, currDiff);
    }


    cout << maxDiff << endl;

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

}