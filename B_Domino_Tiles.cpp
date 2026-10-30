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
    int c = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='?'){
            c++;
        }
        if( i < n-2 && s[i] == s[i+2] && s[i] != '?'){
            cout << 0 << endl;
            return;
        }
    }
    if(c==n){
        cout << 4 << endl;
        return;
    }
    int i = 0;
    while(i < n && s[i]!='?') i++;
    if(i==n){
        cout << 1 << endl;
        return;
    }
    int start = i;
    char last = '0';
    if(i >= 2){
        last = s[i-2];
    }
    bool flag = 1, flag2 = 1;
    for(; i < n; i+=2){
        if(last=='0'){
            if(s[i] == '1'){
                last = '1';
                continue;
            }
            if(s[i]=='?'){
                last = (last=='0') ? '1' : '0';
            }else{
                flag = 0;
            }
        }else{
            if(s[i]=='0'){
                last = '0';
                continue;
            }
            if(s[i]=='?'){
                last = '0';
            }else{
                flag = 0;
            }
        }
    }
    int ans = 0;
    if(flag){
        ans++;
    }
    char last1 = '1';
    if(start >= 2) last1 = s[start-2];
    for(int i = start; i < n; i+=2){
        if(last1=='0'){
            if(s[i]=='1'){
                last1 = '1';
                continue;
            }
            if(s[i]=='?'){
                last1 = (last1 == '1') ? '0' : '1';
            }else{
                flag2 = 0;
            }
        }else{
            if(s[i]=='0'){
                last1 = '0';
                continue;
            }
            if(s[i]=='?'){
                last1 = '0';
            }else{
                flag2 = 0;
            }
        }
    }
    if(flag2){
        ans++;
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