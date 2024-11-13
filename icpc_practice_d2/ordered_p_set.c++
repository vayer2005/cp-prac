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
    cin >> n;
    vector<int> vals(n,0);

    for (int i = 0; i < n; i++) {
        cin >> vals[i];
    }

    vector<int> valid;
    for (int i = 1; i < n; i++) {  
        if (n % i == 0) {
            int prevMax = -1;
            int currMin = vals[0];
            int currMax = 0;
            bool found = true;
            for (int j = 0; j < n; j++) {
                currMin = min(currMin, vals[j]);
                currMax = max(currMax, vals[j]);
                if ((j+1)%i == 0) {
                    if (currMin <= prevMax) {
                        found = false;
                        break;
                    }
                    prevMax = currMax;
                    currMax = 0;
                    if(j+1 < vals.size()) {
                        currMin = vals[j+1];
                    }
                    
                }
            }
            if (found) {
                valid.push_back(n/i);
            }
        }
    }

    sort(valid.begin(), valid.end());
    if (valid.size() == 0) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < valid.size(); i++) {
        cout << valid[i] << endl;
    }

}