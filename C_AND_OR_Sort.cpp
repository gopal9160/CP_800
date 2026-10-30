#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[0]=='1'){
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(s[i]=='0'){
                ans++;
            }
        }
        cout << ans << endl;
    }else{
        int p = -1;
        for(int i = 1; i < n-1; i++){
            if(s[i]=='1' && s[i+1]=='0'){
                p = i;
                break;
            }
        }
        if(p==-1){
            cout << 0 << endl;
            return;
        }
        int ans = INT_MAX;
        vector<int> pref(n+1, 0), suff(n+2, 0);
        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + (s[i-1]=='1');
        }
        for(int i = n; i >= 1; i--){
            suff[i] = suff[i+1] + (s[i-1]=='0');
        }
        int f = -1;
        for(int i = 0; i < n; i++){
            if(s[i]=='1'){
                f = i;
                break;
            }
        }
        for(int i = f+1; i <= n+1; i++){
            ans = min(ans, suff[i] + pref[i-1]);
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