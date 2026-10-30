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
    set<int> st, st1;
    for(int i = 0; i < n; i++){
        if(n >= a[i] && !st.count(a[i])){
            st.insert(a[i]);
            st1.insert(i);
        }
    }
    if(st.size()==n){
        cout << "YES\n";
        return;
    }
    for(int i = 0; i < n; i++){
        if(st1.count(i)) continue;
        int x = a[i];
        while(x != 0){
            x /=2;
            if(x>= 1 && x <= n && !st.count(x) && !st1.count(i)){
                st.insert(x);
                st1.insert(i);
                break;
            }
        }
    }
    if(st.size() == n){
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