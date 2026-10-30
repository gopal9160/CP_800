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
    if(n % 2 == 0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl; 
        cout << 1 << " " << n << endl; 
    }else{
        cout << 4 << endl;
        cout << 1 << " " << n-1 <<endl;
        cout << 1 << " " << n-1 <<endl;
        cout << n-1 << " " << n <<endl;
        cout << n-1 << " " << n <<endl;
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