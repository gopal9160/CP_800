#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,r,b;
    cin >> n >> r >> b;
    int p = r / (b + 1);
    int q = r % (b + 1);

    for (int i = 0; i <= b; i++) {
        int c = p + (i < q);

        for (int j = 0; j < c; j++)
            cout << 'R';

        if (i != b)
            cout << 'B';
    }
    cout << endl;
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