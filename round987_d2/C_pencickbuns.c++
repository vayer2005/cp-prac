#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    if (n%2==1){
        if (n <= 25) {
            cout << -1 << endl;
            return;
        } else {
            vector<int>vec(n,0);
            vec[0] = 1;
            vec[9] = 1;
            vec[10]=2;
            vec[25]=1;
            vec[26]=2;
            int index = 3;
            for (int i = 1; i < 8;i+=2) {
                vec[i] = index;
                vec[i+1] = index;
                index += 1;
            }

            for (int i = 11;i<24;i+=2) {
                vec[i] = index;
                vec[i+1] = index;
                index+=1;
            }

            for (int i = 27; i < n; i+=2) {
                vec[i] = index;
                vec[i+1] = index;
                index+=1;
            }

            for (int i = 0; i < n;i++) {
                cout << vec[i] << " ";
            }
            cout << endl;
        }
        return;
    } else {
        for (int i = 0; i < n/2; i++) {
            cout << i+1 << " " << i+1 << " ";
        }
        cout << endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}