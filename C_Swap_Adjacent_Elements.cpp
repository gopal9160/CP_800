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
    string s;
    cin >> s;
    bool sorted = 1;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            sorted = 0;
            break;
        }
    }
    if(sorted){
        cout << "YES\n";
        return;
    }
    if(a[0]!=1 && s[0]==0){
        cout << "NO\n";
        return;
    }
    bool ok = 1;
    for(int i = 0; i < n-1; i++){
        if(s[i]==0){
            if(a[i] > i+1){
                cout << "NO\n";
                return;
            }else if(a[i] == i+1){
                continue;
            }else{
                int j = a[i] - 1;
                while(j < i){
                    if(s[j]==0){
                        cout << "NO\n";
                        return;
                    }
                    j++;
                }
            }
        }
    }
    cout << "YES\n";
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