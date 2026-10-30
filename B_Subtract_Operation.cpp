#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    map<int,int> mp;
    for(int i = 0; i < n; i++){
        mp[a[i]]++;
    }
    bool flag = 0;
    for(int i = 0; i < n; i++){
        if(mp.count(a[i]+k)){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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