#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    if(n==1  || n==3){
        cout << "-1" << endl;
    }else{
        if(n % 2 == 0){
            for(ll i = 0; i < n-2; i++){
                cout << "3"; 
            }
            cout << "66" << endl;
        }else{
            for(ll i = 0; i < n-5; i++){
                cout << "3";
            }
            cout << "36366" << endl;
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