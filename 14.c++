#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool sorted = true;
        long long res = LLONG_MAX;
        for(int i = 1; i < n; i++){
            if(a[i] < a[i-1]){
                sorted  = false;
                break;
            }
            long long op = a[i] - a[i-1];
            res = min(res,op);
        }
        int ans = (res/2) + 1;
        if(sorted==false){
            cout << "0" << endl;
        }else{
            cout << ans << endl;
        }
        

    }
    return 0;
}