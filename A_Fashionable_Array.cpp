#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i  < n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int ans = 1;
        if((a[0] + a[n-1]) % 2==0){
            cout << 0 << endl;
            continue;
        }
        for(int i = 1; i < n; i++){
            if(a[0] % 2 != a[i] % 2){
                break;
            }else{
                ans++;
            }
        }
        int res = 1;
        for(int i = n-2; i >=0; i--){
            if(a[n-1] % 2 != a[i] % 2){
                break;
            }else{
                res++;
            }
        }
        cout << min(res,ans) << endl;
    }
    return 0;
}