#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> a(n);
    int count = INT_MIN;
    int c = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='1'){
            c++;
            count = max(c,count);
        }else{
            c = 0;
        }
    }
    if(count>=k){
        cout << "NO\n";
        return;
    }else{
        cout << "YES\n";
    }
    for(int i = 0; i < n; i++){
        a[i] = i+1;
    }
    int l = 0, r = n-1;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cout << a[l++] << " ";
        }else{
            cout << a[r--] << " ";
        }
    }
    cout << endl;
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