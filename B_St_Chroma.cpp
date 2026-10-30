#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        a[i] = i;
    }
    bool flag = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            flag = 1;
            continue;
        }
        cout << a[i] << " ";
    }
    if(flag == 1){
        cout << x << endl;
    }else{
        cout << endl;
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