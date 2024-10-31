#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;
    int startx; int starty;
    cin >> startx >> starty;

    int resx; int resy;
    long long minDistance = INT_MAX;
    int x; int y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        long long curr = sqrt(pow(x-startx,2) + pow(y-starty,2));
        if (curr < minDistance) {
            resx = x;
            resy = y;
            minDistance = curr;
        } else if (curr == minDistance) {
            if (x < resx || y < resy) {
                resx = x;
                resy = y;
            }
        }
    }

    cout << resx << " " << resy << endl;


}