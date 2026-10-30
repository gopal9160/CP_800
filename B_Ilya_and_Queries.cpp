#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    int n = s.size();
    vector<int> a(n,0);
    for(int i = 1; i < n; i++){
        if(s[i]==s[i-1]){
            a[i]++;
        }
    }
    ll sum = 0;
    for(int i=1; i < n; i++){
        sum += a[i];
        a[i] = sum;
    }
    while(q--){
        ll l,r;
        cin >> l >> r;
        l--;
        r--;
        cout << a[r] - a[l] << endl;
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