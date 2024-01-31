#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while(n > 1) {
        if (n % 2 == 0) {
            ans++;
            n /= 2;
        }
        else break;
    }
    cout << ans << endl;
    return 0;
}