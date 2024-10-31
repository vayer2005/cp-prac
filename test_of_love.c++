#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

long long n; int k; int m; string s;
void solve() {
    cin >> n >> m >> k;
    cin >> s;

    s = 'L' + s + 'L';
    vector<bool> res(n+2, false);
    res[n+1] = true;
    int swimDist = 0;

    for (int i = n; i > -1; i--) {
        if (s[i] == 'C') {
            res[i] = false;
            continue;
        }
        if (s[i] == 'L') {
            for (int j = i+1; j <= min(i+m, int(res.size())-1); j++) {
                res[i] = res[i] or res[j];
            }
        } else if (s[i] == 'W') {
            
            for (int j = i+1; j <= min(i+k, int(res.size())-1); j++) {
                if (s[j] == 'C') {
                    break;
                }
                if (res[j] && swimDist + j - i <= k) {
                    res[i] = true;
                    swimDist+=j-i;
                    continue;
                }
            }
        }
    }

    if (res[0]) {
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