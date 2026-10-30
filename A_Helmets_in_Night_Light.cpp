#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n ,p;
        cin >> n >> p;
        vector<long long> a(n);
        vector<long long> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<pair<long long,long long >> v;
        for(int i = 0; i < n; i++){
            v.push_back({b[i],a[i]});
        }
        sort(v.begin(),v.end());

        if(v[0].first > p){
            cout << p*n << endl;
            continue;
        }
        long long  resi = n-1;
        long long cost = p;
        for(int i = 0; i < n; i++){
            if(resi <= 0 || p <= v[i].first) break;

            cost += (v[i].first * min(resi,v[i].second));
            resi -= min(v[i].second,resi);
        }
        if(resi > 0){
            cost += (p * resi);
        }
        cout << cost << endl;
    }
    return 0;
}