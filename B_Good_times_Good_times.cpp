#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    ll num = n;
    ll d = 0;
    while(num != 0){
        d++;
        num /=10;
    }
    d++;
    string res(d, '1');
    for(int i = 1; i < d-1; i++){
        res[i] = '0';
    }
    cout << res << endl;
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