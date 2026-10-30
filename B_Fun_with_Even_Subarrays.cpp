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
    int count = 0;
    int i = n-2;
    while(i >= 0 && a[i]==a[n-1]){
        i--;
    }
    if(i==-1){
        cout << 0 << endl;
        return;
    }
    while(i>=0){
        i -= (n - 1 - i);
        count++;
        while(i>=0 && a[i]==a[n-1]){
            i--;
        }
    }
    cout << count << endl;
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