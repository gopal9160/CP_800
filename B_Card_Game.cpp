#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a, b , c ,d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if(a > c && b > d){
        ans++;
    }else{
        if(a==c){
            if(b > d) ans++;
        }
        if(b==d){
            if(a > c) ans++;
        }
    }
    if(a > d && b > c){
        ans++;
    }else{
        if(a==d){
            if(b > c) ans++;
        }
        if(b==c){
            if(a > d) ans++;
        }
    }
    if(b > c && a > d){
        ans++;
    }else{
        if(b==c){
            if(a > d) ans++;
        }
        if(a==d){
            if(b > c) ans++;
        }
    }
    if(b > d && a > c){
        ans++;
    }else{
        if(b==d){
            if(a > c) ans++;
        }
        if(a==c){
            if(b > d) ans++;
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