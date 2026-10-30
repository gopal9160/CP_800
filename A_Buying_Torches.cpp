#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll x,y,t;
    cin >> x >> y >> t;
    ll sticks = t + (y*t);
    ll ops = (sticks - 2)/(x - 1)+1;
    ops += t;
    cout << ops << endl;

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