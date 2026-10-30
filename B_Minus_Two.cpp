#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int o = 0, e = 0, e1 = 0;
    for(int &x : a){
        cin >> x;
        if(x % 2){
            o++;
        }else if(x % 4 == 0){
            e++;
        }else{
            e1++;
        }
    }
    cout << max({o,e,e1}) << endl;
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