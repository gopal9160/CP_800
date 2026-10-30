#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        long long one = 0, zero = 0;
        for(int i = 0; i < n; i++){
            if(a[i]==1) one++;
            if(a[i]==0) zero++;
        }
        long long ans = pow(2,zero) * one;
        cout << ans << endl;
    }
    return 0;
}