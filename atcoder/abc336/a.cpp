#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        if (i == 0) cout << "L";
        cout << "o";
        if (i == n-1) cout << "ng" << endl;
    }
    return 0;
}