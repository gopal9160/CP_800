#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b;
    cin >> a >> b;
    if(b >= a){
        cout << -1 << endl;
    }else{
        if(a/b > 1){
            cout << b << endl;
            return;
        }
        int ans = 1;
        while(a - b > 1){
            ans++;
            a-=2;
            b--;
        }
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