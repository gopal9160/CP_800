#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    vector<int> res(n);
    res[0] = d[0];
    bool flag = 1;
    for(int i = 1; i < n; i++){
        if(d[i]==0){
            res[i] = res[i-1];
            continue;
        }
        if(res[i-1]  >= d[i]){
            flag = 0;
            break;
        }else{
            res[i] = res[i-1] + d[i];
        }
    }
    if(flag){
        for(int x : res){
            cout << x << " ";
        }
        cout << endl;
    }else{
        cout << -1 << endl;
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