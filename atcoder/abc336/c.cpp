#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main () {
    long long n;
    cin >> n;
    n--;
    vector<int> a;
    while (n) {
        a.push_back(n % 5);
        n /= 5;
    }
    if (a.empty()) a.push_back(0);
    reverse(begin(a), end(a));
    for (int x : a) cout << x * 2;
    cout << endl;
}