#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = n-1;
    while (a[i]==b[i]) i++;
    while (a[j]==b[j]) j--;
    if(i == n){
        cout << 1 << " " << n << endl;
        return;
    }
    int l = i-1;
    while(l >= 0){
        if(b[l]<=b[l+1]){
            l--;
        }else{
            break;
        }
    }
    int r = j+1;
    while(r < n){
        if(b[r] >= b[r-1]){
            r++;
        }else{
            break;
        }
    }

    cout << l + 2 << " " << r  << endl;
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