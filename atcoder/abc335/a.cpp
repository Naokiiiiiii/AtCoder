#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s.replace(s.size()-1, 1, "4") << endl;
    return 0;
}