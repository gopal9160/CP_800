#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    vector<int> mp(n+1,0);
    for(int i=0; i < n; i++){
        mp[a[i]]++;
    }
    int c = 0;
    for(int i = 1; i < n+1; i++){
        if(mp[i] > 0){
            c++;
        }
    }
    if(c>2){
        cout << n << endl;
    }else if(c<2){
        cout << 1 << endl;
    }else{
        cout << (n/2) + 1 << endl;
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