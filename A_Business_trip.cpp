#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int k;
    cin >> k;
    vector<int> a(12);
    for(int &x : a) cin >> x;
    sort(all(a));
    reverse(all(a));
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < 12; i++){
        if(sum >= k){
            break;
        }else{
            sum += a[i];
            ans++;
        }
    }
    if(sum < k){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
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