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

    for (int i = 0; i < 5; i++) {
        if (a <= b & a <= c) {
            a += 1;
        } else if (b <= a & b <= c) {
            b+=1;
        } else {
            c+=1;
        } 
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