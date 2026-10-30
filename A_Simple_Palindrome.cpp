#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    string s = "aeiou";

    int a = n / 5;
    if(n % 5 != 0){
        a++;
    }
    for(int i = 0; i < a; i++){
        s += s;
    }
    s.resize(n);
    sort(all(s));
    for(int i = 0; i < n; i++){
        cout << s[i];
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