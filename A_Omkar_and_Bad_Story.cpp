#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    sort(all(a));
    if(a[0] < 0){
        cout << "No\n";
        return;
    }else{
        cout << "Yes\n";
        cout << 101 << endl;
        for(int i = 0; i <= 100; i++){
            cout << i << " ";
        }
        cout << "\n";
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