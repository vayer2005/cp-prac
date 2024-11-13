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
    int curr;
    
    cin >> n;
    for (int i =0; i < 3; i++) {
        bool found = false;
        for (int j = 0; j < n;j++) {
            cin >> curr;
            if (curr == 7) {
                found = true;
            }
        }
        if (!found) {
            cout << 0 << endl;
            return 0;
        }

    }
    cout << 777 << endl;
    return 0;
   
}