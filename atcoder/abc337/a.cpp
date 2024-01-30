#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    int y[n];
    int sumX = 0, sumY = 0;
    string result;
    for (int i=0; i<n; i++) {
        cin >> x[i] >> y[i];
        sumX += x[i];
        sumY += y[i];
    }
    if (sumX > sumY) result = "Takahashi";
    else if (sumX < sumY) result = "Aoki";
    else result = "Draw";
    cout << result << endl;
    return 0;
}