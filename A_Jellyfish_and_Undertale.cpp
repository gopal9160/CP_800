#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long ans = b-1;
        long long c = 1;
        for(int i = 0; i < n; i++){
            c = min(a,arr[i]+c);
            long long timer = c - 1;
            c = 1;
            ans += timer;
        }
        cout << ans+c << endl;
    }
    return 0;
}