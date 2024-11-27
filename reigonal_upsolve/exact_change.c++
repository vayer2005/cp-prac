#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string a; string b;
    cin >> a >> b;
    if (a == b) {
        long long num1s=0;
        for (long long i = 0; i < a.size(); i++) {
            if (b[i] == '1') {
                num1s++;
            }
        }
        cout << num1s << endl;
        return 0;
    }

    if (b.size() > a.size()) {
        cout << b.size() << endl;
        return 0;
    } 

    long long num1s = 1;
    for (long long i = 1; i < b.size(); i++) {
        if (b[i] == '1') {
            num1s++;
        }
        if (b[i] == '1' && a[i] == '0') {
            cout << b.size() - i + num1s-1<< endl;
            return 0;
        }
    }


}