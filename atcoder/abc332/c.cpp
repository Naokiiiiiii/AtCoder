#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    int ans = 0, muji = 0, logo = 0, bring = m;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '1')  {
            if(bring > 0) bring--;
            else muji++;            
        }
        if(s[i] == '2') {
            logo++;
        }
        if(s[i] == '0' || i==s.length()-1) {
            if(muji+logo > ans) ans = muji+logo;
            muji = 0;
            logo = 0;
            bring = m;
        }
    }
    cout << ans << endl;
    return 0;
}