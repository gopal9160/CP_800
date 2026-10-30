#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {\
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    ll i = 0;
    while(i < n){
        if(a[i] != 0){
            break;
        }else{
            i++;
        }
    }
    ll zero = 0, sum = 0;
    for(int j = i; j < n-1; j++){
        if(a[j]==0){
            zero++;
        }else{
            sum+=a[j]; 
        }
    }
    cout << sum + zero << endl;
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