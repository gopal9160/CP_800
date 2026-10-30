                            #include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = INT_MAX;
        bool flag = false;
        int even = 0;
        for(int i = 0; i < n; i++){
            if(a[i] % 2==0) even++;
            if((a[i] % k) != 0){
                int ops = (k - (a[i] % k)) % k;
                ans = min(ans,ops);
            }else{
                flag = true;
                break;
            }
        }
        if(k==4){
            if(even >= 2) ans = min(ans,0);
            else if(even == 1) ans = min(ans,1);
            else ans = min(ans,2);
        }
        if(flag) cout << 0 << endl;
        else cout << ans << endl;
    }
    return 0;
}