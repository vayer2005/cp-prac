#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

long long n; 
void solve() {
    cin >> n;
    if (n == 6) {
        cout << 7 << endl;
        cout << "1 2 4 6 5 3" << endl;

    } else if (n == 5) {
        cout << 5 << endl;
        cout << "2 1 3 4 5" << endl;
    
    }else {
        long long k = 0;
        vector<long long> sol(n);
        int numDigits = 1 + (int)log2(n);
        if (n % 2 == 0) {
            sol[n-1] = n;
            sol[n-2] = pow(2,numDigits-1) - 1;
            sol[n-3] = pow(2, numDigits -1) - 2;
            sol[n-4] = 1;
            sol[n-5] = 3;
            int k = 2147483648LL>>__builtin_clz(n);
            for (long long i = 0; i < n-5; i++) {
                if (i+1 == pow(2,numDigits-1) - 1) {
                    sol[i] = n-1;
                } else if (i+1 ==  pow(2,numDigits-1) - 2) {
                    sol[i] = n-2;
                } else if (i == 0) {
                    sol[i] = n-3;
                } else if (i == 2) {
                    sol[i] = n-4;
                } else {
                    sol[i] = i + 1;
                }
            }
            cout << (k<<1)-1 << endl;
            for (long long val : sol) {
                cout << val << " ";
            }
            cout << endl;
        } else {
            
            sol[n-1] = n;
            sol[n-2] = n-1;
            sol[n-3] = 1;
            sol[n-4] = 3;
            for (int i =0;i < n-4;i++) {
                if (i == 0) {
                    sol[i] = n-2;
                } else if (i == 2) {
                    sol[i] = n-3;
                } else {
                    sol[i] = i+1;
                }
            }
            cout << n << endl;
            for (long long val : sol) {
                cout << val << " ";
            }
            cout << endl;

        }
    }


}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}