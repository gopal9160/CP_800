#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll k ,a,b,c,d;
    cin >> k >> a >> b >> c >> d;
    if(k < a && k < b){
        cout << 0 << endl;
        return;
    }
    ll ans1 = 0, ans2 = 0;
    ll t1 = k;
    if(t1 >= a){
        ll count = (t1-a) / c + 1;
        ans1 += count;
        t1 -= c*count; 
    }
    if(t1 >=b){
        ans1 += (t1-b) / d + 1;
    }
    t1 = k;
    if(t1 >= b){
        ll count1 = (t1-b) / d + 1;
        ans2 += count1;
        t1 -= d * count1;
    }
    if(t1 >= a){
        ans2+= (t1-a) / c + 1; 
    }
    cout << max(ans1,ans2) << endl;
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