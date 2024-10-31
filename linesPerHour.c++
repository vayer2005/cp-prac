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
    int n; int l;
    cin >> n >> l;

    vector<int> problems(n,0);
    int curr;
    for(int i = 0; i < n; i++) {
        cin >> problems[i];
    }

    sort(problems.begin(), problems.end());
    long long totalLines = 5 * l;
    long long numUsed = 0;
    int i = 0;
    int res = 0;
    while (i < problems.size() && numUsed < totalLines) {
        if (numUsed + problems[i] < totalLines) {
            numUsed += problems[i];
            res += 1;
        }
        i+=1;
    }
    cout << res << endl;
    

}
