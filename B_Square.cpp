#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll l1,b1,l2,b2;
    cin >> l1 >> b1 >> l2 >> b2;
    
    if(max(l1,b1)==max(l2,b2) && min(l1,b1) + min(l2,b2)== max(l1,b1)){
        cout << "Yes\n";
    }else{
        cout << "No\n";
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