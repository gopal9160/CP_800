#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool fun(ll n, ll m){
    if(n==m){
        return true;
    }else if(n % 3 != 0){
        return false;
    }else{
        if(fun(n/3,m) || fun(2*(n/3),m)){
            return true;
        }else{
            return false;
        }
    }
    

}
void solve() {
    ll n,m;
    cin >> n >> m;

    if(fun(n,m)){
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