#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b;
    b.pb(a[0]);
    string res = "1";
    bool flag = 0;
    for(int i = 1; i < n; i++){
        if(!flag){
            if(a[i] >= b.back()){
                res += '1';
                b.pb(a[i]);

            }else if(a[i] <= a[0]){
                res += '1';
                b.pb(a[i]);
                flag = 1;
            }else{
                res += '0';
            }
        }else{
            if(a[i] >= b.back() and a[i] <= a[0]){
                res+='1';
                b.pb(a[i]);
            }else{
                res+='0';
            }
        }
    }
    cout << res << endl;
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