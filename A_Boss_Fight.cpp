#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    sort(all(a));
    int j = n-1, i = 0, ans = 0;
    while(i <= j){
        if(i!=j){
            ans += a[i] + a[j];
        }else{
            ans += a[i];
        }
        if(a[i]==a[j]){
            break;
        }
        i++,j--;
    }
    cout << ans << endl;
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