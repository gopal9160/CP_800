#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = a[n-1] - a[0];

        for(int i = 1; i < n; i++){
            int dif = a[i] - a[0];
            ans = max(ans, dif); 
        }

        for(int i = 0; i < n-1; i++){
            int dif = a[n-1] - a[i];
            ans = max(ans,dif);
        }

        for(int i = 0; i < n-1; i++){
            int dif = a[i]-a[i+1];
            ans = max(dif, ans);
        }
        cout << ans << endl;
    }
    return 0;
}