#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    char last = 'A';
    string result = "Yes";
    for (char c: s) {
        if (c < last) {
            result = "No";
        }
        last = c;
    }
    cout << result << endl;
    return 0;
}