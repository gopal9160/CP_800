#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    sort(all(a));
    int j = 0, len = 0, maxi = 0;
    int i = 0;
    while(a[i]==a[j]) i++;
    for(; i < n; i++){
        int y = a[i];
        int x = 2 * a[j];
        while(x < y){
            j++;
            x = 2 * a[j];
        }
        len = i - j + 1;
        maxi = max(maxi,len);
    }
    cout << n-maxi << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}