#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

int n;

void solve() {
    cin >> n;
    
    if (n % 2 == 0) {
        cout << string(n-2,'3') + "66" << endl;
    } else {
        if (n == 1 || n == 3) {
            cout << -1 << endl;
        } else {
            cout << string(n-5,'3') + "36366" << endl;
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