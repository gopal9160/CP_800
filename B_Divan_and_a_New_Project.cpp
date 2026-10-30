#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<pair<ll,ll>> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second=i+1;    
    }
    sort(a.begin(), a.end(), [](const pair<ll,ll>& p1, const pair<ll,ll>& p2){
        return p1.first > p2.first;
    });
    vector<ll> res(n+1);
    res[0] = 0;
    ll ans = 0;
    ll d = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            res[a[i].second] = d;
        }else{
            res[a[i].second] = -d;
            d++;
        }
        ans += (2LL * a[i].first * abs(res[a[i].second]));
    }
    cout << ans << endl;
    for(ll &x : res){
        cout << x << " ";
    }
    cout << endl;

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