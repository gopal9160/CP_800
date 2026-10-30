#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    string t = s;
    reverse(all(t));
    if(s < t){
        cout << "YES\n";
    }else{
        if(k > 0 && *min_element(all(s)) != *max_element(all(t))){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
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