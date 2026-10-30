#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(all(b));
    reverse(all(b));
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==0){
            a[i] = b[j++];
        }
    }
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";

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