#include <bits/stdc++.h>
using namespace std;

#define pb push_back
// #define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    vector<int> res(n,0);
    int j = 0;
    for(int i = 0; i < n; i++){
        if(i > 0 && a[i] == a[i-1]){
            res[i] = res[i-1];
        }else{
            if(j >= m){
                break;
            }
            while(j < m){
                if(b[j]==a[i]){
                    res[i]++;
                    j++;
                }else if(a[i] > b[j]){
                    j++;
                }else{
                    break;
                }
            }
        }
    }
    cout << accumulate(all(res),0LL) << endl;
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