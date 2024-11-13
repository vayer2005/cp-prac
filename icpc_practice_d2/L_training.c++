#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <set>

using namespace std;

int main() {
    long long n; long long s;

    cin >> n >> s;
    long long l;
    long long r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        if (s >= l && s <= r) {
            s += 1;
        }
    }

    cout << s << endl;

    return 0;
}