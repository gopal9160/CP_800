#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()
bool Biny(int mid, vector<int>& mp, vector<int>& suff, int m, int n){
    int ans = 0;
    for(int i = 1; i <= m; i++){
        int curr = suff[i];
        if(2 * i <= m){
            curr += mp[2 * i];
        }
        ans = max(ans, curr);
    }
    return ans>=mid;
}
void solve() {
    int n, m;
    cin >> n >>  m;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    vector<int> mp(m+1,0);
    for(int &x : a) {
        mp[x]++;
    }

    vector<int> suff(m+2,0);
    for(int i = m; i >= 1; i--) {
        suff[i] = suff[i + 1] + mp[i];
    }
    int low = n, high = 2*n;
    int ans = n;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(Biny(mid, mp, suff, m, n)){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1; 
        }
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