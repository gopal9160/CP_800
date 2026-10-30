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
    vector<int> b;
    for(int i = 0; i < n; i++){
        if((i+1) == a[i]){
            continue;
        }else{
            b.push_back(a[i]);
        }
    }
    reverse(all(b));
    bool flag = 1;
    for(int i = 1; i < b.size(); i++){
        if(b[i-1] > b[i]){
            flag = 0;
            break;
        }
    }

    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO\n";
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