#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n % 2 == 1 && n > 1){
            cout << -1 << endl;
            continue;
        }else{
            ll st = 1;
            ll even = n;
            for(int i = 0; i < n; i++){
                if(i % 2 == 0){
                    cout << even << " ";
                    even -= 2;
                }else{
                    cout << st << " ";
                    st += 2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}