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
    map<int,long>counts;
    cin >> n;
    for (int i = 0; i < n * 10; i++) {
        vector<int> vals(5,0);
        
        for(int j = 0; j < 5; j++) {
            cin >> vals[j];
            if (counts.find(vals[j]) == counts.end()) {
            counts[vals[j]] = 1;
        } else {
            counts[vals[j]] = counts[vals[j]] + 1;
        }
        }

    }

    vector<long> res;
    for (auto &it : counts) {
        if (it.second > n * 2) {
            res.push_back(it.first);
        }
    }

    sort(res.begin(), res.end());

    if (res.size() == 0){
        cout << -1 << endl;
    } else {
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << endl;
        }
    }
    
}