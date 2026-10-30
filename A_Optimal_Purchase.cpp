#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,a,b;
        cin >> n >> a >> b;
        if(n <= 3){
            cout << min(a * n,b) << endl;
            continue;
        }else{
            ll cost1 = a * n;
            ll cost2 = (n/3) * b;
            if(n % 3 != 0){
                cost2 += min(a*(n % 3), b);
            }
            cout << min(cost1,cost2) << endl;
        }
    }
    return 0;
}