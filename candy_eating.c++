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
    int n; int d; int x;
    cin >> n >> d >> x;
    vector<long> types(n,0);
    vector<long> taste(n,0);
    
    priority_queue<long> candy;

    for (int i = 0; i < n; i++) {
        cin >> types[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> taste[i];
    }

    for(int i = 0; i < n; i++) {
        long curr = types[i];
        while (curr--) {
            candy.push(taste[i]);
        }
    }
    long total = 0;
    for (int i = 0; i < d; i++) {
        vector<long> q;
        long numEaten = 0;
        long prev = -1;
        while (!candy.empty() && numEaten < x) {
            while (!candy.empty() && candy.top() == prev) {
                q.push_back(candy.top());
                candy.pop();
            }
            cout << candy.top() << endl;
            total += candy.top();
            prev = candy.top();
            candy.pop();
            for (int j = 0; j < q.size(); j++) {
                candy.push(q[i]);
            }
            numEaten++;
        }
        
        cout << candy.top() << endl;        
    }
    cout << total << endl;

}
