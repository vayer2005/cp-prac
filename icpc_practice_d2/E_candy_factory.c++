#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <set>

using namespace std;

int main() {
    int n; int k;
    cin >> n >> k;

    vector<long long>c(n,0);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());

    int ind = k-1;

    while (ind < n) {
        
        if (c[ind] > c[k-2]) {
            for (int i = 0; i < k; i++) {
                c[i] = c[i] - c[k-1];
            }
            for (int i = 0; i < k; i++) {
                if (c[i] < c[ind]) {
                    long long prev = c[ind];
                    long long temp;
                    for (int x = i; x < k; x++) {
                        temp = c[x];
                        c[x] = prev;
                        prev = temp;
                    }
                    break;
                } 
            }
            c[ind] = 0;
        } else {
            for (int i = 0; i <= k-2; i++) {
                c[i] -= c[ind];
            }
            c[ind] = 0;
        }
        ind += 1;
    }

    long long max = c[0];
    long long sol = 0;
    for (int i = 0; i < k; i++) {
        sol += max - c[i];
    }
    cout << sol << endl;

    return 0;

}