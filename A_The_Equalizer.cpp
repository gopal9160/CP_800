#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<long long> a(n);
        long long sum = 0;
        for(long long x:a){
            cin >> x;
            sum += x;
        }
        if(sum % 2 == 1){
            cout << "YES\n";
            continue;
        }
        if(k % 2 == 0){
            cout << "YES\n";
            continue;
        }else{
            if(n % 2 == 1){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
        
    }
    return 0;
}