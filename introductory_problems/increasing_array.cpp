#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    long long s = 0;
    vector<long long> vec;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t;
        vec.push_back(t);
    }

    for (int i = 0; i < n-1; i++) {
        if (vec[i] > vec[i+1]) {
            s += vec[i] - vec[i+1];
            vec[i+1] += vec[i] - vec[i+1];
        }
    }

    cout << s << "\n";
}