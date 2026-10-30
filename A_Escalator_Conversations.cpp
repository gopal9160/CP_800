#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k,h;
        cin >> n >> m >> k >> h;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int diff = abs(h - a[i]);
            if(diff % k == 0){
                int step = diff / k;
                if(1<= step && step <= m-1){
                    ans++;
                }
            }
            
        }
        cout << ans << endl;
    }
    return 0;
}