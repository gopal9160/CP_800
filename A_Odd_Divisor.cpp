#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int pos = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == n) {
                pos = i;
                break;
            }
        }
        reverse(a.begin(), a.begin() + pos + 1);
        for (int x : a) cout << x << " ";
        cout << endl;
    }
}