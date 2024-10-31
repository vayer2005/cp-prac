#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


int main() {
    int n; int m;
    cin >> n >> m;
    vector<long long> nums(n,0);
    int val;
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> val;
        nums[i] = totalSum + val;
        totalSum += val;
    }

    long long query;

    for (int i = 0; i < m; i++) {
        cin >> query;
        int l = 0;
        int r = n-1;

        while (l < r) {
            int mid = (l + r)/2;
            if (nums[mid] >= query) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        if (query <= 0) {
            cout << 0 << endl;
        } else if (query > nums[n-1]) {
            cout << -1 << endl;
        } else {
            cout << r+1 << endl;
        }
    }



}