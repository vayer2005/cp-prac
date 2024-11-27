#include<bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n; int m;
    cin >> n >> m;
    vector<int> dp(100001, 100001);
    dp[0] = 0;
    unordered_set<int> coins;
    int coin;
    for (int i = 0; i < n; i++) {
        cin >> coin;
        coins.insert(coin);
    }

    vector<pair<char, int> > queries;

    char val;
    int curr;
    for (int i = 0; i < m; i++) {
        cin >> val >> curr;
        if (val == 'X') {
            coins.erase(curr);
        }
        queries.push_back({ val, curr });
    }

    reverse(queries.begin(), queries.end());
    
    for (int i = 0; i < 100001; i++) {
        for (int coin : coins) {
            if ((i - coin) >= 0 && dp[i-coin] != 100001) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    vector<int> sol;
    for (int i = 0; i < m; i++) {
        char c = queries[i].first;
        int coin = queries[i].second;
        if (c == 'X') {
            for (int i = coin; i < 100001; i++) {
                if (dp[i-coin] != 100001) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        } else {
            if (dp[coin] == 100001) {
                sol.push_back(-1);
            } else {
                sol.push_back(dp[coin]);
            }
        }

    }

    for (int i = sol.size()-1; i >= 0; i--) {
        cout << sol[i] << "\n";
    }
}