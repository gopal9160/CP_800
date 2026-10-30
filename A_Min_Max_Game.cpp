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
    int one = 0, zero = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1) one++;
        else zero++;
    }
    if(zero>one){
        cout << "Elsie" << endl;
    }else{
        cout << "Bessie" << endl;
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