#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    if(n % 2 == 0){
        cout << -1 << endl;
        return;
    }else{
        vector<int> res(n);
        iota(all(res),1);
        for(int i = 1; i < n; i+=2){
            swap(res[i],res[i+1]);
        }
        for(int i = 0; i < n; i++){
            cout << res[i] << " ";
        }
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