#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>
#include <queue>

using namespace std;


int main() {
    int n; int k; int p;

    cin >> n >> k >> p;
    vector<int> res;

    for(int i = 1; i <= k; i++) {
        if (n%i==0 && (n/i) <= p) {
            res.push_back(i);
        }
    }

    cout << res.size() << endl;
    for(int x : res) {
        cout << x << endl;
    }

}
