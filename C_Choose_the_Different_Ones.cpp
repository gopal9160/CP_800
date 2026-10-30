#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m,k,x;
    cin >> n >> m >> k;
    set<ll> a,b,c;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x<=k) a.insert(x), c.insert(x);
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        if(x<=k) b.insert(x), c.insert(x);
    }
    if(a.size() >= (k/2) && b.size() >= (k/2) && c.size() == k){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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