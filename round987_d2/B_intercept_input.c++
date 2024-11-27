#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


void solve() {
    int k;
    cin >> k;
    int arr[1000000];
    map<int,int> vals;
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        if(vals.find(arr[i]) != vals.end()) {
            vals[arr[i]]++;
        } else {
            vals[arr[i]] = 1;
        }
    }

    k -= 2;
    for (auto &it : vals) {
        if (k % it.first == 0) {
            if (it.first == k/it.first) {
                if (it.second >= 2) {
                    cout << to_string(it.first) + " " + to_string(it.first) << endl;
                    break;
                }
            } else {
                if (vals[it.first] >= 1 && vals[k/it.first] >= 1) {
                    cout << to_string(it.first) + " " + to_string(k/it.first) << endl;
                    break;
                }
            }
        }
    }




    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;

}