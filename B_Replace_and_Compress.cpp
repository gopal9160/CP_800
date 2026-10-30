#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    int ans = 1;
    int n = s.size();
    bool flag1 = 0, flag2 = 0;
    for(int i = 1; i < n-1; i++){
        if(s[i-1] == '1' && s[i+1]=='1'){
            if(s[i]=='1'){
                flag1 = 1;
            }else{
                flag2 = 1;  
            }
        }
        if(s[i-1] == '0' && s[i+1]=='0'){
            if(s[i]=='0'){
                flag1 = 1;
            }else{
                flag2 = 1;
            }
        }
    }
    if(flag1) ans++;
    if(flag2) ans++;
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