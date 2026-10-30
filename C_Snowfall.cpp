#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i <n; i++) cin >> a[i];
        vector<ll> res(n);
        for(ll i = 0; i < n; i++){
            if(a[i] % 2 == 0 && a[i]  % 3 != 0){
                cout << a[i] << " ";
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] % 3 != 0 && a[i] % 2 != 0){
                cout << a[i] << " ";
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0 && a[i] % 3 == 0){
                cout << a[i] << " ";
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0 && a[i] % 3 == 0){
                cout << a[i] << " ";
            }
        }
        
        cout << endl;
    }
}