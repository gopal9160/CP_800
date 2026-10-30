#include <bits/stdc++.h>
using namespace std;

#define pb push_back
// #define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x :a) cin >> x;
    int i = 0, j = n-1;
    bool flag = 1,ispali = 1;
    vector<int> d;
    while(i < j){
        if(a[i]!=a[j]){
            ispali = 0;
        }
        d.push_back(abs(a[i]-a[j]));
        i++,j--;
    }
    if(ispali){
        cout << 0 << endl;
    }else{
        int ans = d[0];
        for(int i = 1; i < d.size(); i++){
            ans = __gcd(ans,d[i]);
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