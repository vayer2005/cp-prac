#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    int numZg = 0;

    while (i<n) {
        if (s.substr(i,1) == "1"){
            i+=1;
        } else {
            numZg += 1;
            while (s.substr(i,1) == "0") {
                i+=1;
            }
        }
    }
    i = 0;
    int num1g = 0;
    while (i<n) {
        if (s.substr(i,1) == "0"){
            i+=1;
        } else {
            num1g += 1;
            while (s.substr(i,1) == "1") {
                i+=1;
            }
        }
    }

    cout << min(numZg, num1g) << endl;
}