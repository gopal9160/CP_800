#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a;
    string b;
    cin >> a >> b;

    int n = b.size();
    bool flag = 1;
    for(int i = 0; i < n; i++){
        if(b[i] != '9'){
            flag = 0;
            break;
        }
    }
    if(flag){\
        cout << a * n << endl;
    }else{
        n--;
        cout << a * n << endl;
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