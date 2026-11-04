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

    ll sum = 0;
    for(ll i = 1; i < n; i++){
        sum += abs(a[i-1]-a[i]);
    }
    if(sum == 0){
        cout << 1 << endl;
        return;
    }
    int curr = 1;
    for(int i = 0; i < n-1; i++){
        while(i < n-1 && a[i]==a[i+1]){
            i++;
        }
        if(i==n-1){break;}
        bool inc = a[i] < a[i+1];
        while(i < n-1){
            if(inc && a[i] <= a[i+1]){
                i++;
            }else if(!inc && a[i]>=a[i+1]){
                i++;
            }else{
                break;
            }
        }
        curr++;
        i--;
    }
    cout << curr << endl;
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