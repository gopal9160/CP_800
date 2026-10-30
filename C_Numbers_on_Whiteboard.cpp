#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    cout << 2 << endl;
    cout << n << " " << n-1 << endl;
    int sum = (n+n) / 2;
    for(int i = n-2; i >= 1; i--){
        cout << sum << " " << i << endl;
        sum = (sum + i+1) / 2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}