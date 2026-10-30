#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int l,r;
    cin >> l >> r;
    int ans = INT_MIN;
    int res = 0;
    if((r-l) < 100){
        for(int i = l; i <= r; i++){
            int num = i;
            int mini = INT_MAX;
            int maxi = INT_MIN;
            while(num != 0){
                mini = min(mini,num % 10);
                maxi = max(maxi,num % 10);
                num /= 10;
            }
            if(ans < maxi - mini){
                ans = maxi- mini;
                res = i;
            }
        }
        cout << res << endl;
    }else{
        int n1 = l % 100;
        if(n1 <= 90){
            res = l + (90-n1);
        }else{
            res = l + (190 - n1);
        }
        cout << res << endl;
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