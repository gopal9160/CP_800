#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    map<int,int> mp;
    vector<int> b;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % m == 0){
            ans = 1;
            continue;
        }else{
            b.push_back(m - (a[i] % m));
            mp[b.back()]++;
        }
    }

    for(int i = 0; i < b.size(); i++){
        int x = mp[b[i]], y = mp[m-b[i]];
        if(x==0 && y==0){
            continue;
        }
        int mn = min(x,y);
        x -= mn;
        y -= mn;
        ans++;
        if(x == 0 && y == 0){
            mp[b[i]] = 0, mp[m-b[i]] = 0;
            continue;
        }
        if(x==0){
            y--;
        }else{
            x--;
        }
        ans += (x  + y);
        mp[b[i]] = 0, mp[m-b[i]] = 0;
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