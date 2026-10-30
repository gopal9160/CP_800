#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int m = n*k;
        vector<long long> a(m);
        for(auto &it : a) cin >> it;
        long long sum = 0;
        for(int i = (m-1) - (n / 2); i >= 0; i-=(n/2 + 1)){
            if(k--){
                sum += a[i];
            }
            if(k==0) break;
        }
        cout << sum << endl;
    }
    return 0;
}