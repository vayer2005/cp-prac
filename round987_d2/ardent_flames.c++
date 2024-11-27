#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n; int m; int k;
    cin >> n >> m >> k;

    vector<int> health(n,0);
    vector<int> pos(n,0);
    for (int i=0;i<n;i++){
        cin >> health[i];
    }
    for (int i=0;i<n;i++){
        cin >> pos[i];
    }
    int low = 0;
    int high = pow(10,9)+1;

    while (high > low) {
        int mid = (high + low)/2;
        vector<pair<int, int> >vals;

        for (int i=0;i<n;i++) {
            pair<int,int> start;
            pair<int, int> end;

            int currpos = pos[i];
            int currhealth = health[i];

            if (ceil((1.0 * health[i])/mid) > m) {
                continue;
            }
            start.first = currpos - m + ceil((1.0 * health[i])/mid);
            start.second = 1;
            end.first = currpos + m - ceil((1.0 * health[i])/mid)+1;
            end.second = -1;
            vals.push_back(start);
            vals.push_back(end);
        }

        sort(vals.begin(), vals.end());

        int cnt = 0;
        bool found=false;
        for (int i=0; i<vals.size();i++){
            cnt+=vals[i].second;
            if(cnt>=k){
                found=true;
                high=mid;
                break;
            }
        }
        if(!found) {
            low = mid+1;
        }
    }

    if (high == pow(10,9)+1) {
        cout << -1 << endl;
    } else {
        cout << high << endl;
    }
    
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;

    

    while (t--) {
        solve();
    }
}