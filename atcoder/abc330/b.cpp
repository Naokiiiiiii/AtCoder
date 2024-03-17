#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    long long n, l, r;
    cin >> n >> l >> r;
    long long a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        if (a[i] < l) {
            cout << l << " ";
        } else if (r <= a[i]) {
            cout << r << " ";
        } else if (l <= a[i] < r) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}