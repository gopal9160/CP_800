#include <bits/stdc++.h>
using namespace std;

#define pb push_back
// #define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 1;
    for(int i= 1; i < n; i++){
        if(s[i] != s[i-1]){
            count++;
        }
    }
    int ans = count;
    for(int i = 1; i < n-1; i++){
        if(s[i-1]==s[i+1] && s[i] != s[i-1]){
            ans = min(count-2,ans);
            break;
        }else if(s[i] != s[i-1] && s[i-1] != s[i+1] && s[i+1] != s[i]){
            ans = min(count-1,ans);
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