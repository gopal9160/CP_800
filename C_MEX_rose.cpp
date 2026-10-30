#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<bool> b(k,0);
    for(int i = 0; i < n; i++){
        if(a[i] <= k-1){
            b[a[i]] = 1;
        }
    }
    int c1 = 0;
    for(int i= 0; i < k; i++){
        if(!b[i]){
            c1++;
        }
    }
    int c = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==k) c++;
    }
    cout << max(c1,c) << endl;
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