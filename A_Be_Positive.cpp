#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x : a) cin >> x;
    ll c = 0,c1 = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] > 0){
            c++;
        }else if(a[i] < 0){
            c1++;
        }
    }
    ll size = n/2;
    if(n%2==1){
        size++;
    }
    if(size <= c){
        cout << 1 << endl;
    }else if(size <= c1){
        cout << -1 << endl;
    }else{
        cout << 0 << endl;
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