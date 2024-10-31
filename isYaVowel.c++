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
    string s;
    cin >> s;
    vector<string> vowels = { "a", "e", "i", "o", "u", "y" };

    int withy = 0;
    int withouty = 0;
    for(int i = 0; i < s.size(); i++) {
        string currChar = s.substr(i, 1);
        if (find(vowels.begin(), vowels.end(), currChar) != vowels.end()) {
            if (currChar == "y") {
                withy += 1;
            } else {
                withy += 1;
                withouty += 1;
            }
        }
    }
    cout << withouty << " " << withy << endl;
}
