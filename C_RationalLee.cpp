#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;

        vector<ll>a(n);
        vector<int>b(k);

        for(ll &x : a) cin >> x;

        for(int &x : b) cin >> x;

        sort(a.rbegin(),a.rend());
        sort(b.begin(),b.end());
        
        ll ans = 0;
        int l = 0,r = n - 1;
        for(int i = 0;i < k;i++){
            ans += a[l];

            if(b[i] == 1) ans += a[l];

            l++;
        }
        for(int i = k-1; i >= 0; i--){
            if(b[i] == 1) continue;
            ans += a[r];
            r -= (b[i] - 1);
        }
        cout<<ans<<endl;
    }
}