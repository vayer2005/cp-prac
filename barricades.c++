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
    int x1; int y1; int x2; int y2;
    float minInt = -1.0;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        if (!(x1 > 0 && x2 > 0 || x1 < 0 && x2 < 0)) {
            float c = (1.0 * (y2 - y1))/(1.0 * (x2 - x1));
            float yInt = y2 - c*x2;
            if (yInt > 0) {
                if (minInt == -1) {
                    minInt = yInt;
                } else {
                    minInt = min(yInt, minInt);
                }
            }
        }
    }

    cout << minInt << endl;
}
