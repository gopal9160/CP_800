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
    int sum = accumulate(all(a),0LL);
    double avg = (double)sum /(double) n;
    if(round(avg)==5){
        cout << 0 << endl;
    }else{
        sort(all(a));
        int target = (n * 5) - n/2;
        int s = target - sum;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s>0){
                s -= (5-a[i]);
                ans++;
            }else{
                break;
            }
        }
        cout << ans << endl;
    }
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