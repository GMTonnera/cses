#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, t;
    cin >> n;

    long long s1 = (n+1)*n / 2;
    long long s2 = 0;

    for(int i = 0; i < n-1; i++) {
        cin >> t;
        s2 += t;
   }

   cout << s1-s2 << "\n";

}