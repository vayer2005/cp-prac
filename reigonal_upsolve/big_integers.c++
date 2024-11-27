#include<bits/stdc++.h>

using namespace std;

void solve() {
    
    string s1; string s2;
    cin >> s1 >> s2;

    bool nickS1Smaller = s1 < s2;
    bool s1Smaller;

    if (s1.length() < s2.length()) {
        s1Smaller = true;
    } else if (s1.length() > s2.length()) {
        s1Smaller = false;
    } else {
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == s2[i]) {
                continue;
            } else {
                if ((s1[i] >= 'A' && s1[i] <= 'Z') && (s2[i] >= 'A' && s2[i] <= 'Z')) {
                    s1Smaller = s1[i] < s2[i];
                } else if ((s1[i] >= 'a' && s1[i] <= 'z') && (s2[i] >= 'a' && s2[i] <= 'z')) {
                    s1Smaller = s1[i] < s2[i];
                } else if ((s1[i] >= '0' && s1[i] <= '9') && (s2[i] >= '0' && s2[i] <= '9')) {
                    s1Smaller = s1[i] < s2[i];
                }
                else {
                    if ((s1[i] >= '0' && s1[i] <= '9') && !(s2[i] >= '0' && s2[i] <= '9')) {
                        s1Smaller = true;
                    } else if ((s2[i] >= '0' && s2[i] <= '9') && !(s1[i] >= '0' && s1[i] <= '9')) {
                        s1Smaller = false;
                    } else {
                        s1Smaller = s1[i] > s2[i];
                    }
                    
                }
                break;
            }
        }
    }

    if (nickS1Smaller == s1Smaller) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
}