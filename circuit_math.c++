#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;


int main() {
    int n;
    cin >> n;
    map<char,bool>mp;
    stack<bool> stack;

    for (int i = 0; i < n; i++) {
        char currChar = (char)(i+65);
        char val;
        cin >> val;
        if (val == 'T') {
            mp[currChar] = true;
        } else {
            mp[currChar] = false;     
        }

    }

    string input;
    cin.ignore();
    getline(cin, input);
    cout << input << endl;

    vector<char>ops;
    int length = 0;
    for (int i = 0; i < input.size(); i+=2) {
        ops.push_back(input[i]);
        length++;
    }
    for (int i = 0; i < length; i++) {
        if (ops[i] == '*') {
            bool v1;
            bool v2;
            v2 = stack.top();
            stack.pop();
            v1 = stack.top();
            stack.pop();
            stack.push(v2 && v1);

        } else if (ops[i] == '+') {
            bool v1;
            bool v2;
            v2 = stack.top();
            stack.pop();
            v1 = stack.top();
            stack.pop();
            stack.push(v2 || v1);

        } else if (ops[i] == '-') {
            bool v1;
            v1 = stack.top();
            stack.pop();
            stack.push(!v1);
        } else {
            stack.push(mp[ops[i]]);
        }
    }

    bool res = stack.top();

    if (res == false) {
      cout << 'F' << endl;
    } else {
      cout << 'T' << endl;
    }
}