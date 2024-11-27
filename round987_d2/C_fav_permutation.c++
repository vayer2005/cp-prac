#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


void solve() {
    int n;
    cin >> n;
    if (n == 2 || n == 3 || n == 4) {
        cout << -1 << endl;
        return;
    } else {
        vector<int> nums;
        int ind = 1;
       while(ind <= n) {
            nums.push_back(ind);
            ind += 2;
        }
        ind -= 2;
        if ((ind + 1) % 6 == 0) {
            nums.push_back(4);
            for(int i = 2; i <= n; i+=2) {
                if (i != 4) {
                    nums.push_back(i);
                }
            }
        } else if ((ind - 1) % 6 == 0) {
            nums.push_back(2);
            for(int i = 2; i <= n; i+=2) {
                if (i != 2) {
                    nums.push_back(i);
                } 
            }
        } else {
            nums.push_back(6);
            for(int i = 2; i <= n; i+=2) {
                if (i != 6) {
                    nums.push_back(i);
                }
            }
        }

        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
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