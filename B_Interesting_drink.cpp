#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> freq(100001,0);
    for(ll &x : a){
        cin >> x;
        freq[x]++;
    }
    vector<ll> prefix(100001,0);
    freq[0] = prefix[0];
    for(int i = 1; i <= 100001; i++){
        prefix[i] = prefix[i-1] + freq[i];
    }
    int q;
    cin >> q;
    while(q--){
        ll num;
        cin >> num;
        if(num > 100000){
            cout << n << endl;
        }else{
            cout << prefix[num] << endl; 
        }
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