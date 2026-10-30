#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve() {
    ll s,n;
    cin >> s >> n;
    vector<pair<long long, long long>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(all(a));
    bool f = 1;
    for(int i = 0; i < n; i++){
        if(s <= a[i].first){
            f = 0;
            break;
        }else{
            s += a[i].second;
        }
    }
    if(f){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}