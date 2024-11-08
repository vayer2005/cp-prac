#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


void solve() {
    int n; long long f; long long a; long long b;
    cin >> n >> f >> a >> b;
    vector<long long> vals(n,0);

    for (int i = 0; i < n; i++) {
        cin >> vals[i];
    }

    long long moment = 0;
    long long currbat = f;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if ((vals[i] - moment) * a > b) {
            currbat -= b;
            moment = vals[i];
        } else {
            currbat -= (vals[i] - moment) * a;
            moment = vals[i];
        }
        if (currbat <= 0) {
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

}