#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m ,k;
    cin >> n >> m >> k;
    ll a = n / m;
    if(n % m != 0){
        a++;
    }
    if(a + k >= n){
        cout << "NO\n";
    }else{
        cout << "YES\n";
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