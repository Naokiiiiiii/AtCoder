#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int a[n];
    int ans = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i] >= l) ans++;
    }
    cout << ans << endl;
    return 0;
}