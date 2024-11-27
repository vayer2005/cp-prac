#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

#include <queue>

using namespace std;


void solve() {
    priority_queue<int> maxHeap;
    int n, m, g;
    cin >> n >> m >> g;
    map<int, vector<int> > power;
    int numPowerUps = 0;
    int vPow = 1;

    vector<vector<int> > hurdles;
    
    int l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        vector<int> curr(2,0);
        curr[0] = l;
        curr[1] = r;
        hurdles.push_back(curr);
    }

    int pos; int val;
    for (int i = 0; i < m; i++) {
        cin >> pos >> val;
        if (power.find(pos) != power.end()) {
            power[pos].push_back(val);
        } else {
            vector<int> p;
            p.push_back(val);
            power[pos] = p;
        }
    }

    int prev = 1;
    int tPow = 1;
    int res = 0;

    for (int i = 0; i < n; i++) {
        int l, r = hurdles[i][0], hurdles[i][1];

        for (int j = prev; j < l; j++) {
            if (power.find(j) != power.end()) {
                for (int x : power[j]) {
                    maxHeap.insert(x);
                }
            }
        }
        int pNeeded = r - l + 2;
        while ((maxHeap.size() > 0) && (pNeeded > tPow)) {
            tPow += maxHeap.top();
            maxHeap.pop();
            res += 1;
        }

        if (pNeeded > tPow) {
            cout << -1 << endl;
            return;
        }

    }
    cout << res << endl;
    

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;

}