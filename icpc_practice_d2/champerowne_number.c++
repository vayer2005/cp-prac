#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <set>

using namespace std;

int main() {
    int n;
    set<int>vals;
    int curr;
    bool possible = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (vals.find(curr) != vals.end()) {
            possible = false;
        }
    }
    int finA = 1;
    int mult = 6-n;
    if (possible) {
        for (int i = 0; i < 4-n;i++){
            finA *= mult;
            mult -= 1;
        }
        cout << finA << " " << pow(6, 4-n) - finA << endl;
    } else {
        cout << 0 << " " << pow(6, 4-n) << endl;
    }
}