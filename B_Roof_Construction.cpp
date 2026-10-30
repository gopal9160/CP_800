#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    int num = n-1;
    int power = log2(num);
    int n1 = pow(2,power) - 1;
    vector<int> res;
    while(n1 >= 0){
        res.pb(n1);
        n1--;
    }
    n1 = pow(2,power);
    while(n1<=num){
        res.push_back(n1);
        n1++;
    }
    for(int x : res){
        cout << x << " ";
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