#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> suff(n);
    int p = n-1;
    while(p >= 0 && s[p]=='0') {p--;}
    if(p==-1){
        int res = 0;
        for(int i = 0; i < n; i+=(k+1)){
            res++;
        }
        cout << res << endl;
        return;
    }
    for(int i = n-1; i >= 0; i--){
        if(i >= p){
            suff[i] = p;
        }else{
            if(s[i]=='1'){
                suff[i] = i;
                p = i;
            }else{
                suff[i] = p;
            }
        }
    }
    int prev = 0;
    while(s[prev]!='1'){prev++;}
    int ans = 0;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='1'){
            prev = i;
            continue;
        }else{
            int near = min(abs(i-suff[i]), abs(i - prev));
            if(near>k){
                flag = 1;
                ans++;
                prev = i;
            }
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