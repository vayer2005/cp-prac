#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vals(n,0);
    for (int i = 0; i < n; i++) {
        cin >> vals[i];
    }

    if (n == 1) {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n-1; i++) {
        if (vals[i] != i+1) {
            if((vals[i+1]==i+1) && (vals[i] == i+2)){
                vals[i] = i+1;
                vals[i+1] = i+2;
            } else {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}


int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;

}