#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;

    if(n<4 || n % 2){
        cout << "NO\n";
        return;
    }
    sort(all(a));
    int j = 0, k = n/2;
    vector<ll> res(n);
    for(int i = 0; i < n; i++){
        if(i % 2==0){
            res[i] = a[j++];
        }else{
            res[i] = a[k++];
        }
    }
    for(int i = 1; i < n-1; i++){
        if(res[i] > res[i-1] && res[i] > res[i+1]){
            continue;
        }else if(res[i] < res[i-1] && res[i] < res[i+1]){
            continue;
        }else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    for(ll x : res){
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