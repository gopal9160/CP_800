#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ispali(vector<ll>& a, int i, int j){
    while(i <= j){
        if(a[i] != j){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int mex(vector<ll> &a, int i, int j){
    
}
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i <n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(ispali(a,i,j)){
                    
                }
            }
        }
    }
}