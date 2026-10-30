#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a){
        cin >> x;
    }
    int maxi = -1;
    set<int> st;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==0) flag = 1;
        int num = (a[i] - 1) * (i+1);
        maxi = max(num,maxi);
    }
    if(flag==0){
        cout << 0 << " ";
    }
    for(int i = 1; i <= maxi; i++){
        cout << i << " ";
    }
    cout << endl;
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