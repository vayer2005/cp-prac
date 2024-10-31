#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

long long a; long long b; 
void solve() {
    cin >> a >> b;

    if (a >= b) {
        cout << a << endl;
    } else if(b - 2 * a >= 0) {
        cout << 0 << endl;
    } else {
        long long diff = b - a;
        cout << a - diff << endl;
    }

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
}