#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());

        long long mx = 1;
        long long len = 1;
        for(int i = 1; i < n; i++){
            long long diff = a[i] - a[i-1];
            if(diff > k){
                len = 1;
                mx = max(mx,len);
            }else{
                len++;
                mx = max(mx,len);
            }
        }
        long long ans = n - mx;
        cout << ans << endl;
    }
}