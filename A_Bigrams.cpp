#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool flag = 0;
    for(int &x : a) cin >> x;
    sort(all(a));
    reverse(all(a));
    for(int i=0; i < n; i++){
        if(a[i]>=3){
            flag = 1;
            break;
        }
    }
    for(int i = 1; i < n; i++){
        if(a[i] + a[i-1] >= 4){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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