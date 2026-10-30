#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int same = 0;
    int ans = 0;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(a[i] >= b[i]){
            ans += (a[i] - b[i]);
        }else{
            flag = true;
        }
    }
    if(!flag){
        cout << ans << endl;
        return;
    }
    if(same == n){
        cout << 0 << endl;
    }
    sort(all(a));
    sort(all(b));
    ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < b[i]){
            flag = 1;
            cout << -1 << endl;
            return;
        }else{
            ans += (a[i] - b[i]);
        }
    }
    if(flag){
        cout << ans+k << endl;
    }else{
        cout << ans << endl;
    }
    
    

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