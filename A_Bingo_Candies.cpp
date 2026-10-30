#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n*n);
        for(int i = 0; i < n*n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        int mx = 1;
        int cnt = 1;
        for(int i = 1; i < n*n; i++){
            if(a[i]==a[i-1]){
                cnt++;
                mx = max(cnt,mx); 
            }else{
                cnt = 1;
            }
        }
        int ans = n*(n-1);
        if(mx<=ans){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}