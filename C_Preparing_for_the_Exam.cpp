#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(m);
    vector<int> b(k);
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    for(int i = 0; i < k; i++){
        cin >> b[i];
    }
    string res(m,'1');

    if(k==n){
        cout << res << endl; 
        return;   
    }
    if(k <= n-2){
        res.assign(m, '0');
        cout << res << endl;
        return;
    }
    if(k == n-1){
        vector<bool> mp(n+1,0);
        for(int &x : b) mp[x] = 1;
        int imposter = 0;
        for(int i = 0; i < m; i++){
            if(mp[a[i]] == false){
                imposter = a[i];
                break;
            }
        }
        string ans = "";
        for(int i = 0; i < m; i++){
            if(a[i] != imposter){
                ans += '0';
            }else{
                ans += '1';
            }
        }
        cout << ans << endl;
        return;
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