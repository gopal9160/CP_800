#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        map<long long,long long> mp;
        for(int i =0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        long long e = INT_MIN;
        for(auto it:mp){
            e = max(e,it.second);
        }
        int ops = 0;
        while(e < n){
            ops++;
            auto sum = min(n-e,e);
            ops += sum;
            e += sum;
        }
        cout << ops << endl;
    }
    return 0;
}