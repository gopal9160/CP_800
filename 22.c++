#include<bits/stdc++.h>
#include <numeric>
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
        bool flag = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(__gcd(a[i],a[j]) > n){
                    flag = 0;
                }
            }
        }
        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}