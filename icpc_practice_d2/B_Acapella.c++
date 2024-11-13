#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;

int main() {
    long long n; long long d; 
    cin >> n >> d;
    vector<long long> vals(n,0);
    for (long long i = 0 ; i < n; i++) {
        cin >> vals[i];
    }

    sort(vals.begin(), vals.end());

    long long index = 1;
    long long prev = vals[0];
    long long numRec = 1;
    while (index < n) {
        if (prev + d < vals[index]) {
            numRec += 1;
            prev = vals[index];
        }
        index += 1;
    }
    
    cout << numRec << endl;
    return 0;
}