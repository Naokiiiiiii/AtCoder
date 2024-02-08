#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int M, D;
    int y, m, d;
    cin >> M >> D;
    cin >> y >> m >> d;
    int ansD, ansM, ansY;
    if (d+1 > D) {
        ansD = 1;
        m += 1;
    } else {
        ansD = d+1;
    }
    if (m > M) {
        ansM = 1;
        ansY = y+1;
    } else {
        ansM = m;
        ansY = y;
    }
    cout << ansY << " " << ansM << " " << ansD << endl; 
    return 0;
}