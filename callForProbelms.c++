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
    int n;
    cin >> n;
    int d;
    int res = 0;

    for (int i = 0; i < n; i++) {
        cin >> d;
        if (d % 2 == 1){
            res += 1;
        }
    }

    cout << res << endl;

}
