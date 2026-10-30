typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
ll n,x;
vector<ll> a;
bool fun(ll cur ,ll sum){
    if(cur == n){
        return sum==x? 1 : 0;
    }
    if(fun(cur+1,sum+a[cur])){
        return true;
    }
    if(fun(cur+1,sum-a[cur])){
        return true;
    }
    return false;
}
int main(){
    cin >> n >> x;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll sum = a[0];
    if(fun(1,sum)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}