#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int front;
    
    for (int i=0; i<n; i++) {
        int A;
        cin >> A;
        --A;
        if (A < 0) {
            front = i;
        } else {
            a[A] = i;
        }
    }

    for (int i=0; i<n; i++) {
        cout << front + 1 << " ";
        front = a[front];
    }

    cout << endl;
    return 0;
}