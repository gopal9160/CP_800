#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int sum = 0;  
    int mini = 0, maxi = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        mini = min(mini,sum);
        maxi = max(maxi,sum);
    }
    if(maxi-mini <= k){
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