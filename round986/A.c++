#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


void solve() {
    int n; int a; int b;
    string s;
    cin >> n >> a >> b >> s;
    int x = 0;
    int y = 0;
    for (int i = 0; i < 1000; i++) {
        if (x == a && y == b) {
            cout << "YES" << endl;
            return;
        }
        if (s.at(i%n) == 'N') {
            y+=1;
        }
        else if (s.at(i%n) == 'S') {
            y-=1;
        }
        else if (s.at(i%n) == 'E') {
            x+=1;
        }
        else {
            x-=1;
        }
    }
    cout << "NO" << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    

}