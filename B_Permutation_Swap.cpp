#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        int ops = 0;
        for(int i = 0; i < n; i++){
            int d = abs((i+1) - a[i]);
            ops = __gcd(ops, d);
        }
        cout << ops << endl;
    }
    return 0;
}