#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int sum = 0,one=0,maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i]==0){
            sum++;
        }else{
            one++;
            sum--;
        }
        maxi = max(sum,maxi);
        if(sum < 0){
            sum = 0;
        }
    }
    cout << maxi + one << endl;
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