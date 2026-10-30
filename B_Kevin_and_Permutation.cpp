#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k;
    cin >> n >> k;
    ll l = 1, r = n;
    for(ll i = 1; i <= n; i++){
        if(i % k==0){
            cout << l << " ";
            l++;
        }else{
            cout << r << " ";
            r--;
        }
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