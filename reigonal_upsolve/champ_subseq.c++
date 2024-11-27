#include<bits/stdc++.h>

using namespace std;

int main() {
    int n; string s;
    cin >> n >> s;

    int curr = 0;
    int index = 0;
    while (index < n) {
        curr += 1;
        string c = to_string(curr);
        for (char x : c) {
            if ((index < n) && (x == s[index])) {
                index += 1; 
            }
        }
    }
    cout << curr << endl;
}