#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a){ cin >> x;}
    int one = 0, zero = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==1) one++;
        else zero++;
    }
    if(one > zero){
        for(int i = n-1; i >= 0; --i){
            if(a[i]==1){
                a[i] = 0;
                break;
            }
        }
    }else if(zero > one){
        for(int i = 0; i < n; ++i){
            if(a[i]==0){
                a[i] = 1;
                break;
            }
        }
    }else{
        int l = 0, r = n-1;
        for(int i = 0; i < n; i++){
            if(a[i]==0){
                l = i;
                break;
            }
        }
        for(int i = n-1; i >= 0; --i){
            if(a[i]==1){
                r = i;
                break;
            }
        }
        if(n-r-1 >= l){
            a[l] = 1;
        }else if(l > n-r-1){
            a[r] = 0;
        }
    }

    vector<int> suf(n, 0);
    if(a[n-1]==0){
        suf[n-1] = 1;
    }
    for(int i = n-2; i >= 0; i--){
        suf[i] = suf[i+1];
        if(a[i]==0){
            suf[i]++;
        }
    }
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i]==1){
            ans += suf[i+1];
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