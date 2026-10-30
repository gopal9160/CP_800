#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,a,b;
    cin >> n;
    ll sum1 = 0;
    while(n--){
        cin >> a >> b;
        string s;
        cin >> s;
        if(s=="keep"){
            sum1 += (b-a);
        }
    }
    cout << sum1 << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}