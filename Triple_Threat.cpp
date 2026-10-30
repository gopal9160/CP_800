#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,x;
    cin >> n >> x;

    string s1 = "", s2 = "", s3 = "";
    int one = x/3 ;

    int zero = (3*n) - x;
    int z = zero / 3;
    for(int i = 0; i < z; i++) s1 += '0';
    for(int i = 0; i < z; i++) s2 += '0';
    if(zero % 3 != 0){
        z++;
    }
    for(int i = 0; i < z; i++) s3 += '0';

    for(int i = 0; i < one; i++) s1 += '1';
    for(int i = 0; i < one; i++) s2 += '1';
    if(x % 3 != 0){
        one++;
    }
    for(int i = 0; i < one; i++) s3 += '1';
    
    cout << s1+s2+s3 << endl;

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