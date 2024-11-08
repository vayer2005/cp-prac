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

    s = "L" + s + "L";
    long long currInd = 0;
    long long swimDist = 0;
    while (currInd < n + 1) {

        if ((swimDist == k & s[currInd] == 'W') || s[currInd] == 'C') {
            cout << "NO" << endl;
            break;
        }
        long long furthestLog = -1;
        for (int i = currInd+1; i <= currInd + m; i++) {
            if (s[i] == 'L') {
                furthestLog = i;
            }
        }
        if (furthestLog != -1) {
            currInd = furthestLog;
        } else {
            //Swim as far as can
            currInd += m;
            while (swimDist < k) {
                if (s[currInd] == 'L') {
                    break;
                } else if (s[currInd] == 'C') {
                    break;
                } else {
                    currInd += 1;
                    swimDist += 1;
                }    
                
            }
        }
    }
    if (currInd >= n+1) {
        cout << "YES" << endl;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    

}