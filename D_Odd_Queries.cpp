#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        vector<long long> prefix(n+1,0);
        for(int i = 1; i <= n; i++){   // FIXED
            prefix[i] = prefix[i-1] + a[i-1];
        }
        while(q--){
            long long l,r,k;
            cin >> l >> r >> k;
            long long newSum = sum - (prefix[r] - prefix[l-1]) + (k*(r-l+1)); // FIXED
            if(newSum % 2==0){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
    }
    return 0;
}