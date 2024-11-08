#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


void solve() {
    long long x1; long long y1;
    cin >> x1 >> y1;

    long long currx;
    long long curry;
    long long finx;
    

   for (int i = 0; i < 3; i++) {
        cin >> currx >> curry;
        if (currx != x1) {
            finx = currx;
        }
    }

    cout << (x1 - finx) * (x1 - finx) << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

}