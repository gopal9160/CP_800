#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n*m);
    int c = 0;
    for(int i = 0; i< n*m; i++){
        cin >> a[i];
        if(a[i] < 0){
            c++;
        }
        a[i] = abs(a[i]);
    }
    int sum = accumulate(all(a),0LL);
    int mini= *min_element(all(a));
    if(c % 2 == 0){
        cout << sum << endl;
    }else{
        cout << sum - mini - mini<< endl;
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