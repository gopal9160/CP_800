#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        int odd = 0;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 1){
                odd++;
            }
        }
        if(odd % 2 == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}