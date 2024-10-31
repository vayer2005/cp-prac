#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <cmath>

using namespace std;

long long n;
bool isDivisible(string s) {
    int sumOdd=0; int sumEven=0;
    bool isEven = true;
    for (char c : s) {
        int digit = c - '0';
        if (isEven) {
            sumEven += digit;
        } else {
            sumOdd += digit;
        }
        isEven = !isEven;
        
    }
    int totalSum = sumOdd + sumEven;

    return (sumOdd - sumEven) % 11 == 0 && totalSum % 3 == 0 && s.back() == '6';

    
}

string findSmallest() {
    cin >> n;
    if (n == 1 || n == 3) {
        return "-1";
    }
    
    string number("3", n-1);
    number += '6';

    while (number.length() == n) {
        if (isDivisible(number)) {
            return number;
        }

        for (int i = n-1; i >= 0; --i) {
            if (number[i] == '3') {
                number[i] = '6';
                break;
            } else {
                number[i] = '3';
            }
        }
    }

    return "-1";


    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << findSmallest() << endl;
    }
    

}