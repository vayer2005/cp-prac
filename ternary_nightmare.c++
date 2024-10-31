#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


int main() {
    int n; int k;
    cin >> n >> k;
    string s;
    cin >> s;

    int l = 0;
    int r = 0;
    int res = 0;
    int num2s = 0;

    while (r < n) {
        if(s.substr(r,1) == "2") {
            num2s+=1;
        }
        if (num2s == k + 1) {
            res = max(res, r-l);
            while (l < r && s.substr(l,1) != "2") {
                l += 1;
            }
            l+=1;
            num2s -= 1;
        }
        r+=1;
        
    }

    res = max(res, r - l);

    cout << res << endl;

    
}