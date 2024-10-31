#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

int a; int b; int c;
void solve() {
    cin >> a >> b >> c;
    int adds = 0;
    while (adds < 5) {
        if (a <= b && a <= c) {
            a++;
        } else if (b <= c && b <= a) {
            b++;
        } else if (c <= a && c <= b) {
            c++;
        }
        adds++;
    }

    cout << a * b * c << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    





}