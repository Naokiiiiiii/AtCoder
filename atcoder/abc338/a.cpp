#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    string moji;
    string result = "Yes";
    cin >> moji;
    if(moji[0] < 'A' || moji[0] > 'Z'){
        result = "No";
    }
    for(int i=1; i<moji.length(); i++) {
        if(moji[i] >= 'A' && moji[i] <= 'Z'){
            result = "No";
        }
    }
    cout << result << endl;
    return 0;
}