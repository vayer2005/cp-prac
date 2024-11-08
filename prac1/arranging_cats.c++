#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


void solve() {
    long long n;
    string orig;
    string desire;
    cin >> n;
    cin >> orig >> desire;
    int n1or = 0;
    int n1des = 0;
    int wrongpos = 0;

    for (int i = 0; i < orig.length(); i++) {
        if (orig[i] == '1') {
            n1or+=1;
        }
        if (desire[i] == '1') {
            n1des+=1;
            if (orig[i] == '0') {
                wrongpos+=1;
            }
        }
    }

    if (n1des > n1or) {
        cout << max(n1des - n1or, wrongpos) << endl;
    } else {
        cout << wrongpos + n1or - n1des << endl;
    }
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

}