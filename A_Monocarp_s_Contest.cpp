#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x :a) cin >> x;
    int c  = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==0) c++;
    }
    int ans = 0;
    if(c<2){
        cout << -1 << endl;
        return;
    }
    if(a[0]==1){
        ans++;
    }
    if(a[n-1]==1){
        ans++;
    }
    cout << ans << endl;
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