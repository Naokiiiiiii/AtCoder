#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string s;
    cin >> s;
    int moji[128] = {};
    for (char c: s) {
        ++moji[c];
    }
    char ans = 'a';
    for (char c = 'b'; c <= 'z'; ++c) {
        if (moji[c] > moji[ans]) {
            ans = c;
        }
    }
    cout << ans << endl;
    return 0;
}