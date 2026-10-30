#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    vector<int> pref(n,0), suff(n,0);
    pref[0] = a[0];
    suff[n-1] = a[n-1];
    for(int i = 1; i < n; i++){
        pref[i] = a[i] + pref[i-1];
    }
    for(int i = n-2; i >= 0; i--){
        suff[i] = a[i] + suff[i+1];
    }
    int i = 0, j = n-1, ans = 0;
    while(i < j){
        if(pref[i]==suff[j]){
            int len = i + 1 + (n - j);
            ans = max(ans, len);
            j--;
            i++;
        }else if(pref[i] > suff[j]){
            j--;
        }else{
            i++;
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