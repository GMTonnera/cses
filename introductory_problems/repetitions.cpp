#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int n = 1;
    int m = 0;

    cin >> s;

    for(int i = 1; i < s.length(); i++) {
        
        if(s[i] == s[i-1]) {
            n++;
        }
        else {
            if (n > m) {
                m = n;
            }
            n = 1;
        }
    }

    if (n > m) {
        m = n;
    }
    cout << m << "\n";
}