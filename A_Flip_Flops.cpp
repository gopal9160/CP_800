#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , c, k;
        cin >> n >> c >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]>c){
            cout << c << endl;
            continue;
            
        }
        for(int i = 0; i < n; i++){
            if(a[i] <= c){
                if((c-a[i]) <= k){
                    k = k - (c-a[i]);
                    c = c + c;
                }else{
                    c += a[i];
                    if(k > 0){
                        c += k;
                        k -= k;
                    }
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}