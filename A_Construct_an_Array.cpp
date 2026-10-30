#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long cur = a[n-1];
        int ans = (cur > 0);
        for(int i = n - 2; i >= 0; i--) {
            if(cur > 0 && a[i] + cur > 0) {
                cur = a[i] + cur;
                ans++;
            }
            else {
                cur = a[i];
                if(cur > 0) ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}