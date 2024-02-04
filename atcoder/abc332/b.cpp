#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int k, g, m;
    int glass=0, magcap=0;
    cin >> k >> g >> m;
    for(int i=0; i<k; i++) {
        if(glass == g) {
            glass = 0;
        } else if(magcap == 0) {
            magcap = m;
        } else {
            int sum = glass + magcap;
            if (sum >= g) {
                glass = g;
                magcap = sum - g;
            } else {
                glass = sum;
                magcap = 0;
            }
        }
    }
    cout << glass << " " << magcap << endl;
    return 0;
}