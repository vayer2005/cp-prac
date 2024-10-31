#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

long long n; int k; int m;
void solve() {
    cin >> n >> m >> k;

    vector<int> res;
    int curr = n;
    while (curr > m){
        res.push_back(curr);
        curr--;
    }  
    int i = 1;

    while (i <= m) {
        res.push_back(i);
        i++;
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    

}