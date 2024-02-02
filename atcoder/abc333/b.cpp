#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    cin >> a;
    cin >> b;
    int lengthS;
    if (abs(a[0] - a[1]) > 2) {
        lengthS = 5 - abs(a[0] - a[1]);
    } else {
        lengthS = abs(a[0] - a[1]);
    }
    int lengthT;
    if (abs(b[0] - b[1]) > 2) {
        lengthT = 5 - abs(b[0] - b[1]);
    } else {
        lengthT = abs(b[0] - b[1]);
    }

    if (lengthS == lengthT) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}